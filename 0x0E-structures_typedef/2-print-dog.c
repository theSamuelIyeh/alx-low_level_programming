#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints a dog struct
 *
 * @d: struct object passed to function
 */

void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == NULL)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
