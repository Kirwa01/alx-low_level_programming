#include "main.h"

/**
 * int_strspn - gets the length of the  substring
 * @accept: input
 * @s: input
 * Return: o in success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n,  value, check;

	value = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		check = 0;

		for (n = 0 ; s[n] != '\0' ; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
	}
}
