#include "dog.h"
#include <stddef.h>
/**
 * init_dog - function that initializes struct
 * @d: structure object passed to function
 * @name: name of dog to be initialised
 * @age: age of dog to be initialised
 * @owner: owner of dog to be initialised
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
