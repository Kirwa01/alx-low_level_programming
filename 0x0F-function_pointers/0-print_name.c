#include <stdio.h>

/**
 * print_name - prints the name
 * @name: takes the parameter name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
