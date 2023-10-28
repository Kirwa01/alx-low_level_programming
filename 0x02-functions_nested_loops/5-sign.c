#include "main.h"
/**
 *print_sign - entry point 
 *@n:paremeter 
 *Return:1 if it's greater than 0, 0 if equal to 0 and -1 if it's less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return ('1');
	}
	if else (n == 0)
	{
		_putchar('0');
		return ('0');
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
