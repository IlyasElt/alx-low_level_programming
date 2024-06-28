#include "main.h"

/**
 * print_line - function that draws a straight line
 * of length @n in the terminal.
 * @n: length of the line.
 * Return: prints a line of length @n.
 */



void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
return;
}
