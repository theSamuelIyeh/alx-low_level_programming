#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 *
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	int ret;

	if (c >= 65 || c <= 90)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
