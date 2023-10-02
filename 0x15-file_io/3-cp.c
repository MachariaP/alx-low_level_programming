#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
    /* Check if file_from is -1 (error reading from file) */
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Check if file_to is -1 (error writing to file) */
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
}

/**
 * main - check the code for ALX students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, err_close;
    ssize_t nchars, nwr;
    char buf[1024];

    /* Check if the number of arguments is not 3 */
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
        exit(97);
    }

    /* Open the source file in read-only mode */
    file_from = open(argv[1], O_RDONLY);

    /* Open or create the destination file with write permissions */
    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

    /* Check if files can be opened */
    error_file(file_from, file_to, argv);

    /* Read from the source file and write to the destination file */
    nchars = 1024;
    while (nchars == 1024)
    {
        nchars = read(file_from, buf, 1024);

        /* Check for read errors */
        if (nchars == -1)
            error_file(-1, 0, argv);

        nwr = write(file_to, buf, nchars);

        /* Check for write errors */
        if (nwr == -1)
            error_file(0, -1, argv);
    }

    /* Close the source file */
    err_close = close(file_from);
    if (err_close == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    /* Close the destination file */
    err_close = close(file_to);
    if (err_close == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    /* Return success */
    return (0);
}
