#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: number of integers passed to the program
 * @argv: array storing the integers passed to the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("Error\n");
}

return (0);
}
