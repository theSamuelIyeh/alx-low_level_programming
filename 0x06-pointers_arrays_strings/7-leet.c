#include "main.h"

/**
 * leet - encodes string into 1337
 *
 * @c: string to be encoded to 1337
 *
 * Return: returns string that hbas been encoded into 1337
 */

char *leet(char *c)
{
	int i, j;
	char upper[] = "AEOTL", lower[] = "aeotl", num[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		j = 0;
		for (; j < 5; j++)
		{
			if (c[i] == upper[j] || c[i] == lower[j])
				c[i] = num[j];
		}
	}
	return (c);
}
