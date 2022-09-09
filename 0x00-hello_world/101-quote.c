#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print quote to stderr
 *
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\"", 59);
	return (0);
}
