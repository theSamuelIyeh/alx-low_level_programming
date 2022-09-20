#include <stdio.h>

/**
 * print_rev - print string in reverse
 *
 * @s: string parameter
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i--)
	{
		putchar(*(s + i));
	}
	putchar(10);
}
