#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -print numbers
 * @separator: string printed between numbers
 * @n: number of variadic parameters
 * @...: elipsis for variable parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
}
