#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: the dog in question
 */

void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}

free(d->name);
free(d->owner);
free(d);
}
