#include "main.h"

/**
 * _strlen - measures the length of a string
 * @str: the string to be measured
 *
 * Return: length of the string
 */

int _strlen(char *str)
{
int i;
int length = 0;

for (i = 0; str[i] != '\0'; i++)
{
length++;
}

return (length);
}


/**
 * malloc_check - allocates memory of a certain size,
 * and checks if the memory got allocated succesfully.
 * @size: size of memory to be allocated
 *
 * Return: a pointer to the newly allocated memory or NULL on failure.
 */

void *malloc_check(unsigned int size)
{
void *ptr;

ptr = malloc(size);
if (ptr == NULL)
{
return (NULL);
}

return (ptr);
}



/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of bytes to copy from the second string
 *
 * Return: pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, length_s1, length_s2, length_str;
char *new_string;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

length_s1 = _strlen(s1);
length_s2 = _strlen(s2);
if (n > length_s2)
{
n = length_s2;
}
length_str = length_s1 + n;

new_string = malloc_check(sizeof(char) * length_str + 1);
if (new_string == NULL)
{
return (NULL);
}
/*
 * concatenates the two passed strings up to n bytes
 * of the second passed string into the new string
 */
for (j = 0; j < length_s1; j++)
{
new_string[j] = s1[j];
}
for (i = 0; i < n; i++, j++)
{
new_string[j] = s2[i];
}
new_string[j] = '\0';

return (new_string);
}
