#include "main.h"

/**
 * _check_sqrt - check square root of n
 *
 * @n: number of which square root is returned
 * @root: root to check
 *
 * Return: returns square root of n
 */

int _check_sqrt(int n, int root)
{
	int newvar;

	if (root * root == n)
		return (root);
	if (root == n)
		return (-1);
	newvar = _check_sqrt(n, root + 1);
	return (newvar);
}

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: number of which square root is returned
 *
 * Return: returns square root of n
 */

int _sqrt_recursion(int n)
{
	int root = 0;
	int value;

	if (n == 0 || n < 0)
		return (-1);

	value = _check_sqrt(n, root);
	return (value);
}
