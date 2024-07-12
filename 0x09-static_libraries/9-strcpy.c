#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: points to a buffer whre the copied string is stored.
 * @src: the string to copy.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int i;

if (dest == NULL || src == NULL)
{
return (NULL);
}

for (i = 0 ; src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
