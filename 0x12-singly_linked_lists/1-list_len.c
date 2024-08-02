#include "lists.h"


/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the list in question
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
size_t elements = 0;
const list_t *temp = h;

if (temp == NULL)
{
return (0);
}

while (temp != NULL)
{
elements++;
temp = temp->next;
}

return (elements);
}
