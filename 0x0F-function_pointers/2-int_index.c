#include <stddef.h>

/**
 * int_index - searches for an integer
 *
 * @array: array of integers that will be searched
 *
 * @size: integer size of the array
 *
 * @cmp: function to compare
 *
 * Return: index of integer that doesnt return zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int checker, i;

	if (size <= 0)
		return (-1);
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp != NULL)
			{
				checker = cmp(array[i]);
				if (checker != 0)
					return (i);
			}
		}
	}
	return (-1);
}
