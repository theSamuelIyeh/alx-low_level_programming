#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combination of two two-digit
 * numbers
 *
 * Return: 0
 */
int main(void)
{
	int num1 = 0;
	int num2 = 0;

	while (num1 < 100)
	{
		num2 = 0;
		while (num2 < 100)
		{
			if (!(num1 >= num2))
			{
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');
				putchar(' ');
				putchar(num2 / 10 + '0');
				putchar(num2 % 10 + '0');
				if (num1 == 98 && num2 == 99)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
