#include "main.h"


/**
 * handle_error - handles errors
 * @code: exit code:
 * @msg: message to exit with
 */
void handle_error(int code, const char *msg, ...)
{
va_list args;
va_start(args, msg);
dprintf(STDERR_FILENO, msg, args);
va_end(args);
exit(code);
}

/**
 * main - copies data from a file to another
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 1
 */

int main(int argc, char *argv[])
{
char buffer[1024];
ssize_t bytes_read, bytes_written;
int fd_from, fd_to;
if (argc != 3)
handle_error(97, "Usage: cp file_from file_to\n");
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
exit(99);
}
while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
handle_error(99, "Error: Can't write to %s\n", argv[2]);
}
if (bytes_read == -1)
handle_error(98, "Error: Can't read from file %s\n", argv[1]);
if (close(fd_from) == -1)
handle_error(100, "Error: Can't close fd %d\n", fd_from);
if (close(fd_to) == -1)
handle_error(100, "Error: Can't close fd %d\n", fd_to);
return (0);
}
