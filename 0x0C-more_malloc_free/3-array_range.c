#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: min nuber
 * @max: max number
 * Return: pointer to memory, if fail return null
 */

int *array_range(int min, int max)
{
	int number, i, v = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	number = (max - min) + 1;
	ptr = malloc(number);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[v] = i;
		v++;
	}
	return (ptr);
}
