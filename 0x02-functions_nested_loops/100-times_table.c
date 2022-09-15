#include "main.h"

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
	int b = 0;
	int c = 0;

	while (a <= n)
	{
		b = 0;
		c = 0;
		while (b <= n)
		{
			if (c / 10 == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
			if (b == n)
			{
				break;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			c += a;
			b++;
		}
		_putchar('\n');
		a++;
	}
}
