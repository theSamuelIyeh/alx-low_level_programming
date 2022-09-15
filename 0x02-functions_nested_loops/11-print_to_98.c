#include "main.h"

/**
 * print_to_98 - print all natural numbers starting
 * from given number in parameter list to 98
 *
 * @n: given number to start printing from
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n == 98)
			{
				break;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n == 98)
			{
				break;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
