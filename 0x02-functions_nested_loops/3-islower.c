#include "main.h"
/**
 *int_islower - print lowercase
 *
 *Return: is 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
