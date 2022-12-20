#include <stddef.h>

/**
 * array_iterator - run a function on items of an array
 *
 * @array: array passd to the function
 *
 * @size: size of array array
 *
 * @action: funtion to be run on items of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (action != NULL)
				action(array[i]);
		}
	}
}
