#include "main.h"

/**
 * _strspn - gets the length of the  substring
 * @accept: character to be searched.
 * @s: the string to be measured
 * Return: o in success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0 ; accept[index] ; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
		
	}

