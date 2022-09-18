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

	while (one < n)
	{
		if (n == 0 || n < 0)
			_putchar('\n');
			break;
		two = 0;
		while (two < one)
		{
			_putchar(' ');
			two++;
		}
		_putchar(92);
		_putchar('\n');
		one++;
	}
}
