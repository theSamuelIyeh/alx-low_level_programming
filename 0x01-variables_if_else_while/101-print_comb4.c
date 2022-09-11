#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible different combination of three digits
 *
 * Return: 0
 */
int main(void)
{
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;

	while (number1 < 7)
	{
		while (number2 == number3 || number2 > number3)
		{
			number3++;
			while (number1 == number2 || number1 > number2)
			{
				number2++;
				while (number1 == number3 || number1 > number3)
				{
					number3 = number2 + 1;
				}
			}
		}
		if (number3 > 9)
		{
			number3 = 1;
			number2++;
		}
		if (number2 > 9)
		{
			number2 = 1;
			number1++;
		}
		putchar(number1 % 10 + '0');
		putchar(number2 % 10 + '0');
		putchar(number3 % 10 + '0');
		if (!(number1 == 7 && number2 == 8 && number3 == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	number3++;
	putchar('\n');
	return (0);
}
