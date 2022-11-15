#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int i;
	long int num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%li\n", i - 1);
	return (0);
}
