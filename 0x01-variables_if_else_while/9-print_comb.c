#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all possible combinations
 * of single-digit numbers.
 * Return: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 */


int main(void)
{
	int i;


	for (i = 0 ; i <= 9 ; i++)
	{
		if (i > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
