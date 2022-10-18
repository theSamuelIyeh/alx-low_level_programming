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
	int i = 0;
	int j = 0;
	va_list list;
	char *string;
	int c = 0;

	va_start(list, format);

	while (format[j] && format[j] != '\0')
		j++;

	while (format[i] && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				c = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				c = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				c = 1;
				break;
			case 's':
				string = va_arg(list, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				c = 0;
				break;
		}
		if (c == 1 && i != j - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
