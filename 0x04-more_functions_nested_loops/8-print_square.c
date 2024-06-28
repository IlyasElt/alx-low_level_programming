#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size of the square.
 */

void print_square(int size)
{
int column, row;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 0 ; row < size ; row++)
{
for (column = 0 ; column < size ; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
return;
}
