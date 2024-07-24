#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array of elements
 * @size: size of the array
 * @action: the function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long i;

if (array == NULL || action == NULL || size == 0)
{
return;
}

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
