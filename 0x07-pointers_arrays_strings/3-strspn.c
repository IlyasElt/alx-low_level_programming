#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to check
 * @accept: characters to accept
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int check;
unsigned int length = 0;

for (i = 0 ; s[i] != '\0' ; i++)
{
check = 0;

for (j = 0 ; accept[j] != '\0' ; j++)
{
if (s[i] == accept[j])
{
check = 1;
length++;
break;
}
}

if (check == 0)
{
break;
}
}

return (length);
}
