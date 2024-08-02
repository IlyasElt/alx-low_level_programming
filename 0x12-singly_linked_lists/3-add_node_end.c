#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_len - counts the length of a string
 * @str: the string in question
 *
 * Return: the length of the string
 */

unsigned int str_len(char *str)
{
unsigned int len = 0;

for (; *str != '\0'; str++)
{
len++;
}

return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the start of the list
 * @str: the string to be copied
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
char *copied_string;
list_t *new_node;
list_t *temp_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

copied_string = strdup(str);
if (copied_string == NULL)
{
free(new_node);
return (NULL);
}

new_node->str = copied_string;
new_node->len = str_len(copied_string);
new_node->next = NULL;


if (*head == NULL)
{
*head = new_node;
}
else
{
temp_node = *head;
while (temp_node->next != NULL)
{
temp_node = temp_node->next;
}

temp_node->next = new_node;
}

return (new_node);
}
