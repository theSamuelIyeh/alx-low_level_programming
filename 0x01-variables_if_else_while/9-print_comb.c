#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print every possible combination of single
 * digits seperated by comma and space
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number % 10 + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
