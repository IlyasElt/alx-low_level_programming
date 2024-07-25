#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, or exits with relevant status code on error.
 */
int main(int argc, char *argv[])
{
int (*operation)(int, int);
int num1, num2, result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

result = operation(num1, num2);

printf("%d\n", result);

return (0);
}
