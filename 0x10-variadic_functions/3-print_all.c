#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: anything being printed
 *
 * Readme.md: returns printed arguments
 */
void print_all(const char * const format, ...)
{
	int i, any_thing;

	char *str;
	va_list arg;

	va_start(arg, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(arg, int));
				any_thing = 0;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				any_thing = 0;
				break;
			case 'c':
				printf("%c", va_arg(arg, int));
				any_thing = 0;
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				any_thing = 1;
				break;

		}
		if (format[i + 1] != '\0' && any_thing == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
