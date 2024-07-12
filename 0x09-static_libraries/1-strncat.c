#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes from src to concatenate
 * Return: a pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0 ; dest[i] != '\0' ; i++)
{
;
}

for (j = 0 ; j < n && src[j] != '\0' ; j++, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';

return (dest);
}
