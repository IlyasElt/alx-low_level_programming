#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name in question
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
