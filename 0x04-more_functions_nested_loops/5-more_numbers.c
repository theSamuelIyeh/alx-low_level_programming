#include "main.h"

/**
 * print_more_numbers - print numbers 0 to 14 10 times
 *
 * Return: void
 */

void print_more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 14; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
