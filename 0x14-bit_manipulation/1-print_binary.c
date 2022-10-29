#include "main.h"

/**
 * print_binary - prints binary value of int
 *
 * @n: int to be taken in
 */

void print_binary(unsigned long int n)
{
	unsigned long int startbit, bs2;

	if (n == 0)
		_putchar('0');

	for (bs2 = 1; n >= bs2; bs2 *= 2)
	{
		startbit = bs2;
	}

	for (; startbit >= 1; startbit *= 0.5)
	{
		if (n >= startbit)
		{
			_putchar('1');
			n = n - startbit;
		}
		else
			_putchar('0');
	}
}
