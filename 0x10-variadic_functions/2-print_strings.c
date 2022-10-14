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
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = "nil";
		printf("%s", str);
		if (separator != NULL)
			if (i != n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
