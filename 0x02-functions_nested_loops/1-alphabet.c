#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Description: This function uses a for loop to iterate over the lowercase
 * letters of the alphabet from 'a' to 'z'. It prints each letter using the
 * putchar function and then prints a newline character at the end.
 */

void print_alphabet(void)
{
char letter;

for (letter = 'a' ; letter <= 'z' ; letter++)
{
_putchar(letter);
}
_putchar('\n');
return;
}
