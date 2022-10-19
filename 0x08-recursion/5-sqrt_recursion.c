#include "main.h"

/**
 * _sqrt_recursion - returns nautural square root of a number
 *
 * @n: number of which square root is returned
 *
 * Return: returns square root of n
 */

int _sqrt_recursion(int n)
{
	int root = n;
	int value;

	if (n == 0 || n < 0)
		return (-1);

	value = _check_sqrt(n, root);
	return (value);
}
