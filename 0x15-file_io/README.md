## 0x15. C - File I/O

- **Language:** C
- **Project Type:** Syscall
- **By:** Julien Barbier
- **Weight:** 1
- **Project Duration:** September 4, 2023, 6:00 AM - September 5, 2023, 6:00 AM

*An auto review will be launched at the deadline.*

## Resources

- [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=qv9PCJGgV54)

## Man Pages

You can find more information about the following functions in their respective man pages or by using the `help` command:

- `open`: [man open](https://linux.die.net/man/2/open)
- `close`: [man close](https://linux.die.net/man/2/close)
- `read`: [man read](https://linux.die.net/man/2/read)
- `write`: [man write](https://linux.die.net/man/2/write)
- `dprintf`: [man dprintf](https://linux.die.net/man/3/dprintf)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

In this project, you will learn:

- How to look for the right source of information online.
- How to create, open, close, read, and write files.
- What are file descriptors and their importance.
- Understanding the 3 standard file descriptors, their purposes, and their POSIX names.
- How to use the I/O system calls such as open, close, read, and write.
- The usage and significance of flags like O_RDONLY, O_WRONLY, and O_RDWR.
- Understanding file permissions and how to set them when creating a file with the open system call.
- What a system call is and how it differs from a regular function call.
- Differentiating between a function and a system call.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line.
- A README.md file at the root of the project folder is mandatory.
- Your code should follow the Betty style, and it will be checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are malloc, free, and exit. Functions like printf, puts, calloc, realloc, etc., are forbidden.
- Allowed syscalls: read, write, open, close.
- You are allowed to use _putchar.
- You don't have to push _putchar.c; we will use our own file. If you do, it won't be taken into account.
- In the provided examples, main.c files are shown for testing purposes, but you don't have to push them to your repo. We will use our own main.c files during compilation, which may be different from the examples.
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h.
- Don't forget to push your header file.
- All your header files should be include guarded.
- Tip: always prefer using symbolic constants (POSIX) vs. numbers when it makes sense. For instance, `read(STDIN_FILENO, ...` vs. `read(0, ...`.

# Task 0: Tread Lightly, She Is Near

## Prototype

```c
ssize_t read_textfile(const char *filename, size_t letters);
```
# Read Text File and Print to POSIX Standard Output

## Description

- `letters` represents the number of letters it should read and print.
- The function returns the actual number of letters it could read and print.
- If the file cannot be opened or read, it returns 0.
- If `filename` is NULL, it returns 0.
- If the write operation fails or does not write the expected amount of bytes, it returns 0.

## Task 1: Under the Snow


### Prototype

```c
int create_file(const char *filename, char *text_content);

```
## Description

