#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


/**
 * str_len - counts the length of a string
 * @str: string to count
 *
 * Return: length of the string
 */

unsigned int str_len(const char *str)
{
int i;
unsigned int len = 0;

if (str ==  NULL)
{
return (0);
}

for (i = 0; str[i] != '\0'; i++)
{
len++;
}

return (len);
}


/**
 * print_list - prints all the elements of a list_t list.
 * @h: The list to print
 *
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
size_t elements = 0;
unsigned int str_length;
const list_t *temp = h;

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
str_length = str_len(temp->str);
printf("[%u] %s\n", str_length, temp->str);
elements++;
temp = temp->next;
}
}

return (elements);
}
