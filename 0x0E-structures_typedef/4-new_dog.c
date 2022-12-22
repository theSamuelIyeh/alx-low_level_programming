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
	int i = 0, j = 0, k;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(i * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		new_dog->name[k] = name[k];
	new_dog->age = age;
	new_dog->owner = malloc(j * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
	{
		new_dog->owner[k] = owner[k];
	}
	return (new_dog);
}
