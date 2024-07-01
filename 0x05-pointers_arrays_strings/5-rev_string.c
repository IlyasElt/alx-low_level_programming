#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to reverse.
 */


void rev_string(char *s)
{
int counter = 0;
int i;
char tmp_char;

while (s[counter] != '\0')
{
counter++;
}

for (i = 0 ; i < counter / 2 ; i++)
{
tmp_char = s[i];
s[i] = s[counter - 1 - i];
s[counter - 1 - i] = tmp_char;
}

return;
}
