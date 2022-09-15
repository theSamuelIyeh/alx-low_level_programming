#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @l: digit of whichlast digit is to be printed
 *
 * Return: the last digit of l
 */
int print_last_digit(int l)
{
	int ret;

	ret = l % 10;

	if (ret < 0)
	{
		ret *= -1;
	}
	_putchar(ret + '0');
	return (ret);
}
