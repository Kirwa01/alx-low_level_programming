#include "main.h"

/**
 * _put_recursion - print a string with a new line.
 * @s:pointer to the string
 * Return: returns 0 in success
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
