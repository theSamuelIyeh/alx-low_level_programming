#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * infinite_add - add two string of numbers
 * @n1: first strimg to be added
 * @n2: second string to be added
 * @r: buffer where result of addition is stored
 * @size_r: size of buffer r
 * Return: pointer to buffer r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long int add;
	int ret;

	(void)size_r;
	add = atoi(n1) + atoi(n2);
	ret = sprintf(r, "%lu", add);
	if (ret < 0)
		return (0);
	return (r);
}
