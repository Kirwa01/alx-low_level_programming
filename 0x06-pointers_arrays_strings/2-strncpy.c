#include "main.h"

/**
 * _strncpy - copies the string
 * @dest: destination of the string
 * @src: source of the string
 * @n: number of bytes in a string
 * Return: returns a copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
