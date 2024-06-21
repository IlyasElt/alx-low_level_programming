#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase.
 * Return: abcdefghijklmnopqrstuvwxyz
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
