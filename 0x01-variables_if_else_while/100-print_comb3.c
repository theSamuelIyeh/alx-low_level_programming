#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible different combination of
 * two digits
 *
 * Return: 0
 */
int main(void)
{
	int number1 = 0;
	int number2 = 0;

	while (number1 < 10)
	{
		putchar(number1 % 10 + '0');
		while (number2 == number1 || number1 > number2)
		{
			number2++;
		}
		putchar(number2 % 10 + '0');
		number2++;
		if (number2 > 9)
		{
			number2 = 1;
			number1++;
		}
		if (number1 != 8 && number2 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
