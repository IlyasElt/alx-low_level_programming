#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digit.
 * @c: the character to check for.
 * Return: 1 if c is a digit and 0 otherwise.
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
