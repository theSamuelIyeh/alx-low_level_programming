#include "main.h"
#include <stdio.h>


/**
 * _check_palindrome - checks if string is palindrome
 *
 * @newstring: string without spaces in between
 *
 * @elen: ending length of string
 *
 * @blen: beginning length of string
 *
 * @strlen: real length of string
 *
 * Return: 1 if string is palindrome
 * 0, if string is not palindrome
 *
 */

int _check_palindrome(char *newstring, int elen, int blen, int strlen)
{
	int ret;

	if (elen % 2 == 0 && blen == (strlen / 2) + 1)
		return (1);
	if (elen % 2 != 0 && blen == (strlen / 2) + 1)
		return (1);
	if (newstring[blen] == newstring[elen])
	{
		ret = _check_palindrome(newstring, elen - 1, blen + 1, strlen);
		return (ret);
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome
 *
 * @s: string to check
 *
 * Return: 1 if string is palindrome
 * 0, if string is not palindrome
 */

int is_palindrome(char *s)
{
	char newstring[50];
	int i = 0, v = 0, blen = 0, elen, ret, strlen;

	if (s == NULL)
		return (-1);

	if (s[0] == '\0')
		return (1);

	for (; s[v] != '\0'; v++)
	{
		if (s[v] == ' ')
			continue;
		newstring[i] = s[v];
		i++;
	}
	newstring[i] = '\0';
	elen = i - 1;
	strlen = i - 1;
	ret = _check_palindrome(newstring, elen, blen, strlen);
	return (ret);
}
