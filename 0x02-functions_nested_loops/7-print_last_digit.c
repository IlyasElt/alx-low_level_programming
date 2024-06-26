#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 * @n: the number that the function works around.
 * Return: prints the last digit of the argument n.
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
_putchar(last_digit);
return (last_digit);
}
