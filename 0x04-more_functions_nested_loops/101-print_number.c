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
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10 == 0)
	{
		_putchar(n + '0');
	} else
	{
		num = n / 10;
		rem = n % 10;
		print_number(num);
		_putchar(rem + '0');
	}
}
