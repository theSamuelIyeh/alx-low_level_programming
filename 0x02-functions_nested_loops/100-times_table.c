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
		while (a <= n)
		{
			int b = 0;

			while (b <= n)
			{
				if (b / 10 == 0 && b == 0)
				{}
				else if (b / 10 == 0 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (b / 10 != 0 && b / 10 > 9)
				{
					_putchar((b / 10) / 10 + '0');
					_putchar((b / 10) % 10 + '0');
				}
				else if (b / 10 != 0 && b / 10 < 9)
				{
					_putchar(' ');
					_putchar(b / 10 + '0');
				}
				_putchar(b % 10 + '0');
				if (b == n)
					break;
				_putchar(',');
				_putchar(' ');
				b += a;
			}
			_putchar('\n');
			a++;
		}
	}
}
