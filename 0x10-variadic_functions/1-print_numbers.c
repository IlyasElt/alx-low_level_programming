#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
if (i > 0)
{
if (separator != NULL)
{
printf("%s", separator);
}
}

printf("%d", va_arg(args, int));
}

printf("\n");

va_end(args);
}
