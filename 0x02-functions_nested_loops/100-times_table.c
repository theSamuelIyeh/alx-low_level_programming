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
			int c = 0;
			while (b <= n)
			{
				if (c / 10 == 0)
				{
					if (b == 0)
					{}
					else
					{
						printf("  ");
					}
				}
				else
				{
					if (c / 10 > 9)
					{
						printf("%d%d", (c / 10) / 10, (c / 10) / 10);
					}
					else
					{
						_putchar(' ');
						_putchar(c / 10 + '0');
					}
				}
				_putchar(c % 10 + '0');
				if (b == n)
				{
					break;
				}
				else
				{
					printf(", ");
				}
				c += a;
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
