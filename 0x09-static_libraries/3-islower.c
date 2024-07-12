#include "main.h"
#include <ctype.h>

/**
 * _islower - A function that checks if a letter is lowercase or not.
 * @c: the letter to check if its owercase.
 * Return: 1 if letter is lowercase and 0 if the letter is not lowercase.
 */

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
