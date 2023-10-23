#include "main.h"

/**
 * print_number - prints an integer
 * @n:string integer
 * Return: returns a printed integer
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		_putchar('_');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n1 % 10) + '0');
}
