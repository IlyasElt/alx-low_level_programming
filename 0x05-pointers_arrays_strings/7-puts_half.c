#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: string to print.
 */

void puts_half(char *str)
{
int counter = 0;
int n, i;

while (str[counter] != '\0')
{
counter++;
}

if ((counter) % 2 == 0)
{
n = (counter) / 2;
}
else
{
n = (counter - 1) / 2;
}

for (i = n ; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
