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
	int num3 = 0;
	int num4 = 0;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			num3 = 0;
			while (num3 < 10)
			{
				num4 = 0;
				while (num4 < 10)
				{
					if (!(num1 >= num2 || num1 >= num3 || num1 >= num4
					|| num2 >= num3 || num2 >= num4 || num3 >= num4))
					{
						putchar(num1 % 10 + '0');
						putchar(num2 % 10 + '0');
						putchar(' ');
						putchar(num3 % 10 + '0');
						putchar(num4 % 10 + '0');
						if (num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
					num4++;
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
