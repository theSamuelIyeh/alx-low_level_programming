#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: print quote to stderr
 *
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
