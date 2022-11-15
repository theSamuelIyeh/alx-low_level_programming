#include <unistd.h>
#include "main.h"

/**
 * _putchar - print single characters out
 *
 * @c: character to print out
 *
 * Return: void
 */

void _putchar(int c)
{
	write(1, &c, 1);
}
