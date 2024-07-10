#include "main.h"

/**
 * _sqrt - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @i: The starting point for checking square roots
 * Return: The square root of n, or -1 if no natural square root exists
 */

int _sqrt(int n, int i)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}

if (i * i == n)
{
return (i);
}

if (i * i > n)
{
return (-1);
}

return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The square root of n, or -1 if no natural square root exists
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
