#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string that will be worked on.
 */

void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
if (*str != '\0')
{
str++;
}
}
_putchar('\n');
return;
}
