#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 *
 * @n: number of times diagonal line should be drawn
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int one = 0;
	int two;

	if (n < 0)
	{
		for (one = 0; one < n; one++)
		{
			for (two = 0; two < one; two++)
			{
				_putchar(' ');
			}
			_putchar(92);

			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
		
	}
	_putchar('\n');
}
