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
	char letter = 'a';

	while (number < 10)
	{
		putchar(number % 10 + '0');
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
