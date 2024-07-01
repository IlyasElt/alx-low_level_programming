#include"main.h"

/**
 * swap_int - functions that swaps the values of two integers.
 * @a: pointer that points at the first integer.
 * @b: pointer that points at the second integer.
 */

void swap_int(int *a, int *b)
{
int tmp_value = *a;
*a = *b;
*b = tmp_value;
}
