#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter > 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
