#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * @argc: number of command line arguments
 *
 * @argv: array of command line arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j, lenstr;

	if (argc <= 1)
		printf("%d\n", 0)
	else
	{
		for (i = 1; i < argc; i++)
		{
			lenstr = strlen(argv[i]);
			for (j = 0; j < lenstr; j++)
			{
				switch (argv[i][j])
				{
					case '1':
						break;
					case '2':
						break;
					case '3':
						break;
					case '4':
						break;
					case '5':
						break;
					case '6':
						break;
					case '7':
						break;
					case '8':
						break;
					case '9':
						break;
					case '0':
						break;
					default:
						printf("Error\n");
						return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
