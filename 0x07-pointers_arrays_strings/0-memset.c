#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer that points to the memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: a pointer to the memory adress s
 */


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
{
*(s + i) = b;
}

return (s);
}
