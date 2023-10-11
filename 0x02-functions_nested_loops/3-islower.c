#include "main.h"
/**
 *_islower - print lowercase
 *@c: parameter
 *Return: 1 on success and 0 on failure
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
