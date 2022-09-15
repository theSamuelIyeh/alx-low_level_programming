#include "main.h"
#include <stdio.h>

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
	while (n <= 98 || n >= 98)
	{
		printf("%d", n);
		if (n == 98)
		{
			break;
		}
		else
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n <= 98)
		{
			n++;
		}
		else if (n >= 98)
		{
			n--;
		}
	}
	_putchar('\n');
}
