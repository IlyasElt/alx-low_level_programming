#include "main.h"

/**
 * _memset - fills an area of memory with a character
 * @s: pointer to the area in memory
 * @c: character to fill the area
 * @n: size of area
 *
 * Return: string
 */

char *_memset(char *s, char c, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = c;
}

return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: n elements
 * @size: bytes
 *
 * Return: pointer to the array or NULL in failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

array = malloc(nmemb * size);
if (array == NULL)
{
return (NULL);
}

_memset(array, 0, nmemb * size);

return (array);
}
