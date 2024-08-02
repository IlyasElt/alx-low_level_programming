#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: The list to print
 *
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
size_t elements = 0;
const list_t *temp = h;

if (temp == NULL)
{
return (0);
}

while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[0] (nil)\n");
elements++;
temp = temp->next;
}
else
{
printf("[%u] %s\n", temp->len, temp->str);
elements++;
temp = temp->next;
}
}

return (elements);
}
