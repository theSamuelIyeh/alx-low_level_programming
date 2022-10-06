#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it
 * with a specific character
 * @size: size
 * @c: character
 * Return: null if size is 0, pointer or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
