#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: pointer destination
 * @b: constant byte.
 * @n: number of bytes
 * Return: returns s on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);	
}
