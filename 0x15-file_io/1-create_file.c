#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd, bytes_written;
unsigned int length = 0;
char *original_text = text_content;


if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
