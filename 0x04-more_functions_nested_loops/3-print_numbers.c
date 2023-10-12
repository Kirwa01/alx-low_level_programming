#include "main.h"

/**
 * print_numbers - function that prints numbers
 *
 * Return: remain 0 in success
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		_putchar(i + '0');
	_putchar('\n');
}
