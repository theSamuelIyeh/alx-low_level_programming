#include "main.h"

/**
 * print_number - prints integer passed into it
 *
 * @n: integer passed to it
 *
 */

void print_number(int n)
{
	int num, rem;

	(void)rem;
	if (n / 10 == 0)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		_putchar(n + '0');
	} else
	{
		num = n / 10;
		rem = n % 10;
		print_number(num);
		if (rem < 0)
			rem *= -1;
		_putchar(rem + '0');
	}
}
