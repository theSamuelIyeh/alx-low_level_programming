#include "main.h"

/**
 * reverse_array - reverses content of an array
 *
 * @a: array to be reversed
 *
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int temp, i, j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = a[i];
		j--;
	}
}
