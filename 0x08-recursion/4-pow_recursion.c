#include "main.h"

/**
 * _pow_recursion - returns values of x raised to y
 * @x:input value
 * @y: power
 * Return: returns value of x raised to y in success
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
