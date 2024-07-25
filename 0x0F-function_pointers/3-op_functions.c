#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Subtracts the second integer from the first integer.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Divides the first integer by the second integer.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of the division if b is not zero; otherwise, zero.
 */
int op_div(int a, int b)
{
if (b == 0)
{
return (0);
}

return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of
 * the first integer by the second integer.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The remainder of the division if b is not zero; otherwise, zero.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
return (0);
}

return (a % b);
}
