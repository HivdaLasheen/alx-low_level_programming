#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file.
 * @text_content: content to be added.
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file_descriptor;
    int length;
    int write_status;

    if (!filename)
        return (-1);

    file_descriptor = open(filename, O_WRONLY | O_APPEND);

    if (file_descriptor == -1)
        return (-1);

    if (text_content)
    {
        for (length = 0; text_content[length]; length++)
            ;

        write_status = write(file_descriptor, text_content, length);

        if (write_status == -1)
            return (-1);
    }

    close(file_descriptor);

    return (1);
}
