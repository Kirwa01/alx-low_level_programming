#include "main.h"

/**
 *_isalpha - prints lower or lowerscase
 *@int: parameter that checks the code
 *
 *Return: 1 if it is true and 0 if false
 */
int _isalpha(int c);
{
	if ((c => 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
		
}
