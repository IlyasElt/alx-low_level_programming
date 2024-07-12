#include "main.h"

/**
 * _puts - function that prints a string, followed by a newline.
 * @str: string to print.
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
return;
}
