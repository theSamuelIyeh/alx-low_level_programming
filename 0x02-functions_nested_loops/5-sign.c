#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @n: number of which its sign should be
 * printed
 *
 * Return: 1 if number is positive
 * 0 if number is zero and
 * -1 if number is negative
 */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		ret = 1;
	}
	else if (n == 0)
	{
		ret = 0;
	}
	else if (n < 0)
	{
		ret = -1;
	}
	return (ret);
}
