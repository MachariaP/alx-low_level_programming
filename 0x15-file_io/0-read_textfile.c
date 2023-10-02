#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t nrd, nwr;
    char *buf;

    /* Check if filename is NULL */
    if (!filename)
        return (0);

    /* Open the file in read-only mode */
    fd = open(filename, O_RDONLY);

    /* Check if file opening is successful */
    if (fd == -1)
        return (0);

    /* Allocate memory for buffer */
    buf = malloc(sizeof(char) * (letters));
    if (!buf)
        return (0);

    /* Read from the file into the buffer */
    nrd = read(fd, buf, letters);

    /* Write the contents of the buffer to STDOUT */
    nwr = write(STDOUT_FILENO, buf, nrd);

    /* Close the file */
    close(fd);

    /* Free the allocated memory */
    free(buf);

    /* Return the number of bytes written */
    return (nwr);
}
