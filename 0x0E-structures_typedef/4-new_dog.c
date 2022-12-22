#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog object
 * @name: name of dog in dog object
 * @age: float age of dog in dog object
 * @owner: owner of dog in dog object
 * Return: a pointer to the created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name1 = name;
	char *owner1 = owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog != NULL)
	{
		new_dog->name = name1;
		new_dog->age = age;
		new_dog->owner = owner1;

		return (new_dog);
	}
	free(new_dog);
	return (NULL);
}
