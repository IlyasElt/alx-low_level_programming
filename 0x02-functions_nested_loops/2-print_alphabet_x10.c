#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by
 *  a new line.
 *
 * Description : This function uses a for loop to do the following 10 times
 *  - iterates through the lowercase letters of the alphabet letters 'a' to
 *  - 'z' using a for loop. It prints each one using the _putchar function
 *  - and then prints a new line character at the end
 */


void print_alphabet_x10(void)
{
int j;

for (j = 0 ; j < 10 ; j++)
{
char letter;

for (letter = 'a' ; letter <= 'z' ; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
return;
}
