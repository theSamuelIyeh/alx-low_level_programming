#include "main.h"

/**
 * jack_bauer - print every minute of the day of jack
 * bauer starting from 00:00 to 23:59
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int first, second = 0;

	while (first < 24)
	{
		second = 0;
		while (second < 60)
		{
			_putchar(first / 10 + '0');
			_putchar(first % 10 + '0');
			_putchar(':');
			_putchar(second / 10 + '0');
			_putchar(second % 10 + '0');
			second++;
		}
		first++;
	}
}
