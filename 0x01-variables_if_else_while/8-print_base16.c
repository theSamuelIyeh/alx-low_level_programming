#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 16)
	{
		putchar(number % 16 + '0x');
		number++;
	}
	putchar('\n');
	return (0);
}
