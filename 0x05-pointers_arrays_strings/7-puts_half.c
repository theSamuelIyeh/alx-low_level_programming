#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a string
 * @str: string parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}
