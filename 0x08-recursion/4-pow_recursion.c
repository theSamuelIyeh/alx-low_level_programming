#include "main.h"

/**
 * _pow_recursion - print power of number
 * @x: number for which power is to be printed
 * @y: power of number
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	result = x * _pow_recursion(x, y - 1);
	return (result);
}
