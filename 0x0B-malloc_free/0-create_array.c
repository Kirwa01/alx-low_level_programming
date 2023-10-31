#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: prints the size of the character
 * @c: character storage
 * Return: always 0 in success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
