#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @n: numbers printed
 * @separator: pointer to the char
 * Return: returns the printed numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(arg, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
