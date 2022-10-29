#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert string of binary to base 10
 *
 * @b: string of binary
 *
 * Return: unsigned itn value of base 10
 * 0, if b is null, empty of contains characters other than 0, 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i, bs2, strlen, sum;

	if (b == NULL)
		return (0);
	if (b[0] == '\0')
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	bs2 = 1;
	strlen = i;
	sum = 0;

	for (i = strlen; i > 0; i--)
	{
		if (b[i - 1] == '1')
			sum += bs2;
		else if (b[i - 1] == '0')
			sum = sum + 0;
		else
			return (0);
		bs2 = bs2 * 2;
	}
	return (sum);
}
