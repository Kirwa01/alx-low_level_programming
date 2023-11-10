#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all the arguments
 * @n: sumed parameter
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(arg, unsigned int);
		}
	}
	va_end(arg);
	return (sum);
}
