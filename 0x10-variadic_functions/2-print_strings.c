#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: string printed between strings
 * @n: number of variadic parameters
 * @...: elipsis for variadic parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0, i< n; i++)
	{
		if (va_arg(list, char *) == NULL)
			printf("nil");
		else
			printf("%s", va_arg(list, char *));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
