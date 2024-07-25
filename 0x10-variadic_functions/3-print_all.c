#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format:  list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
int i = 0, separator = 0;
char *str;
va_list args;
if (format == NULL)
{
printf("\n");
return;
}
va_start(args, format);
while (format[i] != '\0')
{
if (separator)
{
printf(", ");
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
break;
default:
separator = 0;
i++;
continue;
}
separator = 1;
i++;
}
printf("\n");
va_end(args);
}
