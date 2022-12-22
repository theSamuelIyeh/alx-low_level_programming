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
	if (d != NULL)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
