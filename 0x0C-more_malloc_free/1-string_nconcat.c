#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two srings
 * @s1: first string
 * @s2: second string
 * @n: number of second string to be concatenated
 * Return: pointer to string, if fail return null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length1, length2, i, v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; *(s1 + length1) != '\0'; length1++)
		;
	for (length2 = 0; *(s2 + length2) != '\0'; length2++)
		;

	if (n < length2)
		length2 = n;

	length1 += length2;

	ptr = (char *)malloc((length1 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (v = 0; v < length2; v++)
	{
		ptr[i] = s2[v];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
