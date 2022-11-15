#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int i = 2;
	long int num = 612852475143;

	while (i < num)
	{
		if (num % i == 0)
		{
			num /= i;
		} else
			i++;
	}
	if (num > 2)
		i = num;
	printf("%li\n", i);
	return (0);
}
