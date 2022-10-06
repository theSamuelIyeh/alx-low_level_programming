#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string or null if failed
 */

char *str_concat(char *s1, char *s2)
{
	int length1, length2, i, v;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (length1 = 0; *(s1 + length1) != '\0'; length1++)
		;
	for (length2 = 0; *(s2 + length2) != '\0'; length2++)
		;

	length1 += length2;

	ptr = (char *)malloc((length1 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(ptr + i) = s1[i];

	for (v = 0; s2[v] != '\0'; v++)
	{
		*(ptr + i) = s2[v];
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
