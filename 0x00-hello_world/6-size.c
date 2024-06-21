/*
 * File: 6-size.c
 * Author: Ilyas Elattar
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: this function prints the size of various types on the computer
 * it is compiled and run on.
 * Return: 0 if the program completes successfully
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int e;
	float d;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
