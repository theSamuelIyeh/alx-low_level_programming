#include "main.h"

/**
 * _islower - check if letter passed as argument
 * is lowercase
 *
 * @c: character to check
 *
 * Return: 1 if c is lower case
 * or 0 if otherwise
 */
int _islower(int c)
{
	int ret;

	if (c >= 97 && c <= 122)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
