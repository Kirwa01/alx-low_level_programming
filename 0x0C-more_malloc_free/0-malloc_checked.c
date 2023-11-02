#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: character allocated memory
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);
	else
		return (result);
}
