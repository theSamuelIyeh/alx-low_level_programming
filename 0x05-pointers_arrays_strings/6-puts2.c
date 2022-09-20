#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string parameter
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i += 2;
	}
	putchar(10);
}
