#include "main.h"


/**
 * print_alphabet_x10(void) - prints 10 times the alphabet
 *
 * Return: no return value
 */
void print_alphabet_x10(void)
{
	int i;
	char b;
	
	for (i = 0 ; i < 10 ; i++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
			_putchar(b);
		_putchar('\n');
	}
}
