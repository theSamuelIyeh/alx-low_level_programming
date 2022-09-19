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
			while (width < size)
			{
				_putchar(35);
				width++;
			}
			if (height == (size - 1))
			{
				continue;
			}
			_putchar('\n');
			height++;
		}
	}
	_putchar('\n');
}
