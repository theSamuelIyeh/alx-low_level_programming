#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns summ of all its parameters
 * @n: number of parameters
 * @...: elipsis for other parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	return (sum);
	va_end(list);
}
