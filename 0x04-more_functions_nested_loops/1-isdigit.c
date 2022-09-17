#include "main.h"

/**
 * _isdigit - chcks for a digit between 0 and 9
 *
 * @c: digit to be checked
 *
 * Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	int ret;

	if (c >= 48 && c <= 57)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
