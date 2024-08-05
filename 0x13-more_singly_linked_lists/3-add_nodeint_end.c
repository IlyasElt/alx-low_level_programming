#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the head of the linked list
 * @n: the int to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *tempnode;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
}
else
{
tempnode = *head;
while (tempnode->next != NULL)
{
tempnode = tempnode->next;
}

tempnode->next = newnode;
}

return (newnode);
}
