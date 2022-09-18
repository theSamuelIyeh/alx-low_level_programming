#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 *
 * @n: number of times line is drawn
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n == 0 || n < 0)
			break;
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
