#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination of the string
 * @src: string source
 *
 * Return: returns two concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; i <= srclen ; i++)
		dest[destlen + i] = src[i];
	return (dest);

}