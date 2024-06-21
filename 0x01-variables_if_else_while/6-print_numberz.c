#include <stdio.h>

/**
 * main - Etnry point
 * Description: a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0123456789
 */

int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
