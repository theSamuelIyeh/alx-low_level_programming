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

	while (lowLetter <= 'z')
	{
		putchar(lowLetter);
		lowLetter++;
	}
	while (capsLetter <= 'Z')
	{
		putchar(capsLetter);
		capsLetter++;
	}
	putchar('\n');
	return (0);
}
