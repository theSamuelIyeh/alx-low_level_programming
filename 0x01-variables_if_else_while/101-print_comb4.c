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

	while (number1 < 10)
	{
		number2 = 0;
		while (number2 < 10)
		{
			number3 = 0;
			while (number3 < 10)
			{
				if (!(number1 >= number3 || number2 >= number3 || number1 >= number2))
				{
					putchar(number1 % 10 + '0');
					putchar(number2 % 10 + '0');
					putchar(number3 % 10 + '0');
					if (number1 == 7 && number2 == 8 && number3 == 9)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				number3++;
			}
			number2++;
		}
		number1++;
	}
	putchar('\n');
	return (0);
}
