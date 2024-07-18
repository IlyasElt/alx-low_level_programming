#include "main.h"

/**
 * array_range - creates an array of integers from min to max.
 * @min: smallest value
 * @max: biggest value
 *
 * Return: pointer to the array or NULL on failure
 */

int *array_range(int min, int max)
{
int i, j, *array;

if (min > max)
{
return (NULL);
}

array = malloc((max - min + 2) * sizeof(int));
if (array == NULL)
{
return (NULL);
}

for (j = 0, i = min; i <= max; i++, j++)
{
array[j] = i;
}

return (array);
}
