#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    int nletters;
    int rwr;

    /* Check if filename is NULL */
    if (!filename)
        return (-1);

    /* Open the file with write permissions, creating it if it doesn't exist */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    /* Check if opening the file failed */
    if (fd == -1)
        return (-1);

    /* If text_content is NULL, set it to an empty string */
    if (!text_content)
        text_content = "";

    /* Calculate the number of letters in text_content */
    for (nletters = 0; text_content[nletters]; nletters++)
        ;

    /* Write the content to the file */
    rwr = write(fd, text_content, nletters);

    /* Check if writing to the file failed */
    if (rwr == -1)
        return (-1);

    /* Close the file */
    close(fd);

    /* Return success */
    return (1);
}
