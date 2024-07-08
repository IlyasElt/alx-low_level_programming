#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to check
 * @needle: substring to find
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
char *ptr = NULL;

for (i = 0 ; haystack[i] != '\0' ; i++)
{
if (haystack[i] == needle[0])
{
ptr = &haystack[i];
for (j = 0 ; needle[j] != '\0' ; j++, i++)
{
if (haystack[i] != needle[j])
{
ptr = NULL;
break;
}
}
}
}

return (ptr);
}
