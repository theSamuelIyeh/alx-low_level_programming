#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets 10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int times;
	char c;

	for (times = 0; times < 10; times++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
