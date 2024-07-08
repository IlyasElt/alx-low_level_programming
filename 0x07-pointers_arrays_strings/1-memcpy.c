#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: the memory area where n bytes are copied
 * @src: the function copies  n bytes from this memory area
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}

return (dest);
}
