#include "lists.h"
#include <string.h>
#include <stdlib.h>

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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the head of the list
 * @str: the string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
char *copied_string;
list_t *new_node;

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
new_node->next = *head;
*head = new_node;

return (new_node);
}
