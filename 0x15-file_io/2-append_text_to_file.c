#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: the data to append to the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written;
unsigned int length = 0;
char *original_text = text_content;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
while (*text_content != '\0')
{
length++;
text_content++;
}
text_content = original_text;

bytes_written = write(fd, text_content, length);
if (bytes_written == -1 || (size_t)bytes_written != length)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
