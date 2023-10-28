#include "main.h"

/**
 *_abs - finds the absolute value
 *@a:function parameter
 *Return: returns absolute value of a number
 */

int _abs(int a)
{

if (a < 0)
{
	return (-a);
}
else if (a >= 0)
{
	return (a);
}
return (0);
}
