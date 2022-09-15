#include "main.h"

/**
 * _abs - print absolute value of an integer
 *
 * @c: integer to be printed
 *
 * Return: absolute value of c
 */
int _abs(int c)
{
	int ret;

	if (c > 0 || c == 0)
	{
		ret = c;
	}
	else if (c < 0)
	{
		ret = c * -1;
	}
	return (ret);
}
