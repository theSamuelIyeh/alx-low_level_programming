#include "main.h"

/**
 * _isalpha - checks if argument passed is an
 * alphabet
 *
 * @c: argument to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * o if otherwise
 */
int _isalpha(int c)
{
	int ret;

	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
