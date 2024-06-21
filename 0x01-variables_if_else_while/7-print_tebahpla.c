#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: zyxwvutsrqponmlkjihgfedcba
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
