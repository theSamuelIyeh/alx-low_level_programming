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
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		return (c * -1);
	}
}
