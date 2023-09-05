#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_entry(unsigned long int e_entry);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident) {
    if (e_ident[EI_MAG0] != ELFMAG0 ||
        e_ident[EI_MAG1] != ELFMAG1 ||
        e_ident[EI_MAG2] != ELFMAG2 ||
        e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Not an ELF file\n");
        exit(98);
    }
}

/**
 * print_magic - Prints the ELF magic bytes.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Prints the magic bytes in hexadecimal format.
 */
void print_magic(unsigned char *e_ident) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

/**
 * print_class - Prints the ELF file class (32-bit or 64-bit).
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Determines and prints the ELF file class.
 */
void print_class(unsigned char *e_ident) {
    printf("Class:                             %s\n", e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
}

/**
 * print_data - Prints the ELF data format (endianess).
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Determines and prints the ELF data format.
 */
void print_data(unsigned char *e_ident) {
    printf("Data:                              %s\n", e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Invalid data encoding");
}

/**
 * print_version - Prints the ELF version.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Prints the ELF version.
 */
void print_version(unsigned char *e_ident) {
    printf("Version:                           %d (current)\n", e_ident[EI_VERSION]);
}

/**
 * print_abi - Prints the ELF OS/ABI.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Determines and prints the ELF OS/ABI.
 */
void print_abi(unsigned char *e_ident) {
    printf("OS/ABI:                            ");
    switch (e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %d>\n", e_ident[EI_OSABI]);
    }
}

/**
 * print_osabi - Prints the ELF ABI Version.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Prints the ELF ABI Version.
 */
void print_osabi(unsigned char *e_ident) {
    printf("ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the ELF file type.
 * @e_type: The ELF file type.
 *
 * Description: Determines and prints the ELF file type.
 */
void print_type(unsigned int e_type) {
    printf("Type:                              ");
    switch (e_type) {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %d>\n", e_type);
    }
}

/**
 * print_entry - Prints the ELF entry point address.
 * @e_entry: The ELF entry point address.
 *
 * Description: Prints the ELF entry point address in hexadecimal format.
 */
void print_entry(unsigned long int e_entry) {
    printf("Entry point address:               0x%lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file descriptor.
 * @elf: The file descriptor of the ELF file to close.
 *
 * Description: Closes the file descriptor used for the ELF file.
 */
void close_elf(int elf) {
    close(elf);
}

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error opening file\n");
        return 98;
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        fprintf(stderr, "Error reading ELF header\n");
        close_elf(fd);
        return 98;
    }

    check_elf(header.e_ident);

    printf("ELF Header:\n");
    print_magic(header.e_ident);
    print_class(header.e_ident);
    print_data(header.e_ident);
    print_version(header.e_ident);
    print_abi(header.e_ident);
    print_osabi(header.e_ident);
    print_type(header.e_type);
    print_entry(header.e_entry);

    close_elf(fd);

    return 0;
}

