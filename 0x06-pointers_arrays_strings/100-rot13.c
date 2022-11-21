#include "main.h"
#include <stdio.h>
/**
 * rot13 - encrypts string to rot13
 *
 * @c: string to be encrypted to rot13
 *
 * Return: encrypted string
 */

char *rot13(char *c)
{
	int i, j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] =  "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		j = 0;
		for (j = 0; j < 52; j++)
		{
			if (c[i] == rot[j])
			{
				c[i] = alph[j];
				break;
			}
		}
	}
	return (c);
}
