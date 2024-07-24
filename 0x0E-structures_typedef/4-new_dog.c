#include "dog.h"
#include <stdlib.h>



/**
 * _copy - copiesMake a copy of passed in string
 * @str: passed in string
 *
 * Return: new copied string
 */

char *_copy(char *str)
{
int i;
int length = 0;
char *new_str;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
length++;
}

new_str = malloc(sizeof(char) * (length + 1));
if (new_str == NULL)
{
return (NULL);
}

for (i = 0; i <= length; i++)
{
new_str[i] = str[i];
}

return (new_str);
}



/**
 * new_dog - creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner of the dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = malloc(sizeof(dog_t));

if (dog == NULL)
{
return (NULL);
}

dog->name = _copy(name);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = _copy(owner);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

dog->age = age;

return (dog);
}
