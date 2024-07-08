#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character to find in string s
 * Return: pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
int i;
char *ptr = NULL;

for (i = 0 ; s[i] != '\0' ; i++)
{
if (s[i] == c)
{
ptr = &s[i];
break;
}
}

if (s[i] == c)
{
ptr = &s[i];
}

return (ptr);
}
