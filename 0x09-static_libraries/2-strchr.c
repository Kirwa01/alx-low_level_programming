#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the character
 * @c: character located
 * Return: returns 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
