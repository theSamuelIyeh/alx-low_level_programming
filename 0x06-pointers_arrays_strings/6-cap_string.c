#include "main.h"

/**
 * cap_string - capitalizes words in a string
 *
 * @c: string that words will be capitalized in
 *
 * Return: string that was capitalized
 *
 */

char *cap_string(char *c)
{
	int i, increment;

	if (c[0] >= 97 && c[0] <= 122)
	{
		c[0] = 65 + (c[0] - 97);
	}

	for (i = 1; c[i] != '\0'; i++)
	{
		if (c[i] >= 65 && c[i] <= 90)
		{
			increment = c[i] - 65;
			c[i] = 97 + increment;
		}	
	}

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == '.'
			|| c[i] == ',' || c[i] == ';' || c[i] == '!'
			|| c[i] == '?' || c[i] == '"' || c[i] == '(' ||
			c[i] == ')' || c[i] == '{' || c[i] == '}')
		{
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				increment = c[i + 1] - 97;
				c[i + 1] = 65 + increment;
			}
		}
	}
	return (c);
}
