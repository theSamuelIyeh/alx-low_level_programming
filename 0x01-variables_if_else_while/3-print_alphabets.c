#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabet in lowercase, uppercase
 * and then new line
 *
 * Return: 0
 */
int main(void)
{
	char capsLetter = 'A';
	char lowLetter = 'a';

	while (capsLetter <= 'Z')
	{
		putchar('%c', capsLetter);
		capsLetter++;
	}
	while (lowLetter <= 'z')
	{
		putchar('%c', lowLetter);
		lowLetter++;
	}
	putchar('\n');
	return (0);
}
