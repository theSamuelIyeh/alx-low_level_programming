#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print single digit of base 10
 * without using type char
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(int(number));
	}
	putchar('\n');
	return (0);
}
