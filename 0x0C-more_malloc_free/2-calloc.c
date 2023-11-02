#include "main.h"

/**
 * _calloc - allocates the memory of an array
 * @nmemb:number of elements to be allocated
 * @size: size of the array
 *
 * Return: allocated memory of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
