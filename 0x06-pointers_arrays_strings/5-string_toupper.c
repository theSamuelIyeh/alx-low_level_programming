#include "main.h"

/**
 * string_toupper - converts string to uppercase
 *
 * @c: string that will be converted to uppercase
 *
 * Return: string that has been converted to uppercase
 *
 */

char *string_toupper(char *c)
{
	int i, increment;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			increment = c[i] - 97;
			c[i] = 65 + increment;
		}
	}
	return (c);
}
