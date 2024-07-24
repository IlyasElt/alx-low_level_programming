#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

dog->name = strdup(name);
dog->owner = strdup(owner);
dog->age = age;

if (dog->name == NULL || dog->owner == NULL)
{
return (NULL);
}

return (dog);
}
