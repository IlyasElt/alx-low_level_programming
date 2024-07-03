#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination where the string will be concatenated.
 * @src: source string.
 * Return: concatenation of both strings in the destination.
 */

char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0 ; dest[i] != '\0' ; i++)
{
;
}

for (j = 0 ; src[j] != '\0' ; i++, j++)
{
dest[i] = src[j];
}
dest[i] = '\0';

return (dest);
}
