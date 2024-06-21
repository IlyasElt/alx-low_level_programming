#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase except q and e.
 * Return: abcdfghijklmnoprstuvwxyz
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i == 'q' || i == 'e')
			;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
