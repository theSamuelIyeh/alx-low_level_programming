#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
		} else {
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
