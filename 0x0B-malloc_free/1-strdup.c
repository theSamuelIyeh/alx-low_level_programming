#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string and return pointer to the
 * string
 * @str: string to be duplicated
 * Return: null if str is null, null if insufficient memmory
 * returns pointer to new string if successful
 */

char *_strdup(char *str)
{
	int length, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (length = 0; *(str + length) != '\0'; length++)
		;
	ptr = (char *)malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		*(ptr + i) = str[i];
	}
	return (ptr);
}
