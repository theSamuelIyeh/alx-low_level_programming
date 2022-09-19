#include "main.h"

/**
 * print_square - prints a square followed by a new line
 *
 * @size: size of the square to be printed
 *
 * Return: void
 */

void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		height = 0;
		while (height < size)
		{
			width = 0;
			while (width < (size - 1))
			{
				_putchar('#');
				width++;
			}
			_putchar('#');
			_putchar('\n');
			height++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
