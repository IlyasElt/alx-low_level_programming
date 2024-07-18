#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory allocated
 *
 * Return: a pointer to the allocated memory on sucess
 * and termination with a status value of 98 on failure
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
