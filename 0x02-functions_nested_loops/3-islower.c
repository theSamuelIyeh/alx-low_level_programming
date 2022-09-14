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
	if (c >= 97 && c <= 122)
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
}
