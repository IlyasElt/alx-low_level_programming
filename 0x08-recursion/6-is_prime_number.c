#include "main.h"

/**
 * is_prime_helper - Checks if a number is prime recursively.
 * @n: The number to check.
 * @i: The current divisor to check divisibility.
 * Return: 1 if @n is prime, 0 otherwise.
 */

int is_prime_helper(int n, int i)
{

if (n <= 1)
{
return (0);
}

if (i == 1)
{
return (1);
}

if (n % i == 0 && i != n)
{
return (0);
}

return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - Wrapper function to check if a number is prime.
 * @n: The number to check.
 * Return: 1 if @n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (is_prime_helper(n, n - 1));
}
