#include "main.h"

/**
 * _strpbrk - searches for a string of any set of bytes
 * @s: string to be searched
 * @accept: set of bytes searched
 * Return: matched file or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0 ; accept[index] ; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
