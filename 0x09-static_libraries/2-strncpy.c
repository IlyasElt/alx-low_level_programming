#include "main.h"

/**
 * _strncpy - copys a string to dest, using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes from src to copy
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

if (dest == NULL || src == NULL)
{
return (NULL);
}

for (i = 0 ; i < n && src[i] != '\0' ; i++)
{
dest[i] = src[i];
}

for (; i < n ; i++)
{
dest[i] = '\0';
}

return (dest);
}
