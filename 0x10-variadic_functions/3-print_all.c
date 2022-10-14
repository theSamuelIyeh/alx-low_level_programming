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
	int v;
	va_list list;
	char *str;

	va_start(list, format);

	while (format[i] != '\0')
		i++;

	while (format[v] != '\0')
	{
		switch (format[v])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list,char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		v++;
		if (format[v] == 'c' || format[v] == 's' || format[v] == 'f' || format[v] == 'i' && v != i - 1)
			printf("\n");
	}
	printf("\n");
	va_end(list);
}
