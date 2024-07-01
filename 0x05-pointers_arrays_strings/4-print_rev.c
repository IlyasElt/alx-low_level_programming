#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to be printed
 */

void print_rev(char *s)
{
int counter = 0;
int i;

while (*s != '\0')
{
counter++;
s++;
}

s--;

for (i = counter - 1 ; i >= 0 ; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
return;
}
