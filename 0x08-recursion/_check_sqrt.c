#include "main.h"

/**
 * _check_sqrt - checks if root is the square root of n
 *
 * @n: number to be checked for
 *
 * @root: root to check
 *
 * Return: square root of n
 */

int _check_sqrt(int n, int root)
{
	int newvar;

	if (root == 0)
		return (-1);
	if (root * root == n)
		return (root);
	newvar = _check_sqrt(n, root - 1);
	return (newvar)

}
