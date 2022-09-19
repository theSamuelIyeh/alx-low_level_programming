#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all numbers from 1 to 100,
 * printing fizz in place of multiples of 3
 * and buzz in place of multiples of 5
 * and fizzbuzz in place of multiples of 3 and 5
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			if (num != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
