#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: string.
 * Return: the length of the string.
 */

int _strlen(char *s)
{
int counter = 0;

while (*s != 0)
{
counter++;
s++;
}
return (counter);
}
