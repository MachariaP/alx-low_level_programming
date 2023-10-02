#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if it fails or does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    int nletters;
    int rwr;

    /* Check if filename is NULL */
    if (!filename)
        return (-1);

    /* Open the file in append mode with write permissions */
    fd = open(filename, O_WRONLY | O_APPEND);

    /* Check if opening the file failed */
    if (fd == -1)
        return (-1);

    /* If text_content is not NULL, append it to the file */
    if (text_content)
    {
        /* Calculate the number of letters in text_content */
        for (nletters = 0; text_content[nletters]; nletters++)
            ;

        /* Write the content to the file */
        rwr = write(fd, text_content, nletters);

        /* Check if writing to the file failed */
        if (rwr == -1)
            return (-1);
    }

    /* Close the file */
    close(fd);

    /* Return success */
    return (1);
}
