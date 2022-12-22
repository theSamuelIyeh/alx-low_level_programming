#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a struct object
 * @d: struct object
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
