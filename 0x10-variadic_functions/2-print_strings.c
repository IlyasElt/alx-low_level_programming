#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
if (i > 0 && separator != NULL)
{
printf("%s", separator);
}

string = va_arg(args, char *);
printf("%s", string ? string : "(nil)");
}

printf("\n");

va_end(args);
}
