#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory containing
 * the concatenated string, or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
int i, j;
int length = 0;
char *string;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

for (i = 0; s1[i] != '\0'; i++)
{
length++;
}
for (i = 0; s2[i] != '\0'; i++)
{
length++;
}

string = malloc(length + 1 * sizeof(char));
if (string == NULL)
{
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
{
string[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; i++, j++)
{
string[i] = s2[j];
}

string[i] = '\0';

return (string);
}
