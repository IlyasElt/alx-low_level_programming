#include <stdio.h>

/**
 * wildcmp - Compares two strings considering wildcard character '*'.
 * @s1: The first string.
 * @s2: The second string with potential wildcards '*'.
 *
 * Return: 1 if @s1 and @s2 can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);


if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));


if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));


return (0);
}
