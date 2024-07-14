#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Description: This program calculates the minimum number of coins needed
 * to make change for a given amount of cents. It uses coin denominations
 * of 25, 10, 5, 2, and 1 cent. If the number of arguments passed to the
 * program is not exactly 1, it prints "Error" and returns 1. If the argument
 * is negative, it prints 0. The program outputs the minimum number of coins.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect.
 */

int main(int argc, char *argv[])
{
int i, cents;
int sum_coins = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (0);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("Error\n");
return (0);
}

for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
sum_coins++;
}
}

printf("%d\n", sum_coins);

return (0);
}
