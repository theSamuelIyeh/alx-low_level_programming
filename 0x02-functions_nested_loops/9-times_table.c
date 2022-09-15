#include "main.h"

/**
 * times_table - prints the 9 times table starting with
 * 0
 *
 * Return: 0
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a < 10)
	{
		b = 0;
		c = 0;
		while (b < 10)
		{
			if (c / 10 + '0' != 0)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
			if (c % 9 != 0)
			{
				_putchar(',');
				if (c / 10 + '0' == 0)
				{
					_putchar(' ');
				}
				_putchar(' ');
			}
			c += a;
			b++;
		}
		a++;
		_putchar('\n');
	}	
}
