#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1 ; i < argc ; i++)
{
for (j = 0 ; argv[i][j] != '\0' ; j++)
{
if (!(isdigit(argv[i][j])))
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
