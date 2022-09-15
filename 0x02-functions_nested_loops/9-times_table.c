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
			_putchar(c + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			c += a;
			b++;
		}
		a++;
		_putchar('\n');
	}	
}
