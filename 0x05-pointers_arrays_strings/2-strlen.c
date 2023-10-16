#include "main.h"

/**
 * _strlen - creates a string of characters
 * @s: character used to create a string
 * Return: returns lenth
 */

int _strlen(char *s)
{
	int longz = 0;

	while (*s != '\0')
	{
		longz++;
		s++;
	}
	return (longz);
	}

