#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: void.
 */


void more_numbers(void)
{
int n, j;

for (j = 0 ; j < 10 ; j++)
{
for (n = 0 ; n <= 14 ; n++)
{
if (n >= 10)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}
return;
}
