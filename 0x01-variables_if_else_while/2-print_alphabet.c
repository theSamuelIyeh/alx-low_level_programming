#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all lower case alphabet
 *
 * Return 0
 */
int main(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	return (0);
}
