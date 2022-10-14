#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: format
 * @...: elipsis for variable parameters
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list list;
	char *str;

	va_start(list, format);

	while (i != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i')
			printf("%c", va_arg(list, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(list, double));
		else if (format[i] == 's')
		{
			str = va_arg(list,char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
		}
		else
			continue;
		i++;
	}
	printf("\n");
	va_end(list);
}
