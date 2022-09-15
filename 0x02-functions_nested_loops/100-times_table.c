#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints times table of a number
 * starting from 0
 *
 * @n: number of which times table will be printed
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int a = 0;

	if (n > 15 || n < 0)
	{}
	else
	{
		for (; a <= n; a++)
		{
			int b = 0;
			int c = 0;

			for (; b <= n; b++)
			{
				if (c / 10 == 0 && c == 0)
				{}
				else if (c / 10 == 0 && c != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (c / 10 != 0 && c / 10 > 9)
				{
					_putchar((c / 10) / 10 + '0');
					_putchar((c / 10) % 10 + '0');
				}
				else if (c / 10 != 0 && c / 10 < 9)
				{
					_putchar(' ');
					_putchar(c / 10 + '0');
				}
				_putchar(c % 10 + '0');
				if (b == n)
					break;
				_putchar(',');
				_putchar(' ');
				c += a;
			}
			_putchar('\n');
		}
	}
}
