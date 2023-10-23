#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the copied file
 * @src: source of the file
 * @n: number of the bytes
 * Return: dest in success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}

