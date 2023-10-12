#include "main.h"

/**
 * _isupper - checks the uppercase characters
 * @c: parameter to be checked
 * Return: returns either 1 or 0 on success and failure respectfully.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
