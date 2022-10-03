#include "main.h"

/**
 * factorial - reurns the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Return: if n > 0 - the factorial of n
 * if n < 0 - -1 to indicate an error
 */

int factorial(int n)
{
	int result;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	result = n * factorial(n - 1);
	return (result);
}
