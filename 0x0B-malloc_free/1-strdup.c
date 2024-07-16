#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be copied.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL or if
 * memory allocation fails.
 */

char *_strdup(char *str)
{
int i;
int length = 0;
char *new_str;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
length++;
}

new_str = malloc(length + 1 * (sizeof(char)));
if (new_str == NULL)
{
return (NULL);
}

for (i = 0; i <= length; i++)
{
new_str[i] = str[i];
}

return (new_str);
}
