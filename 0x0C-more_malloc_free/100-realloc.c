#include "main.h"

/**
 * _realloc - reallocates memory to a new one
 * @ptr: pointer of the old memory
 * allocated by malloc
 * @old_size: old memory size
 * @new_size: newly allocated memory
 *
 * Return: Newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *k;
	size_t i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		k = malloc(new_size);
		return (k);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	k = malloc(new_size);
		if (k == NULL)
			return (NULL);
		if (new_size > old_size)
			max = old_size;
		for (i = 0; i < max; i++)
			k[i] = oldp[i];
		free(ptr);
		return (k);



}
