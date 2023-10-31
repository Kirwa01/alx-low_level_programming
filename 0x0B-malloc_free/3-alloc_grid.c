#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: rows
 * @height: columnsi
 * Return: NULL on failure and 2D initialized to 0 in success
 */
int **alloc_grid(int width, int height)
{
	int i, k;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);
	result = malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result[i] == NULL)
		{
			free(result);
			for (k = 0; k <= height; k++)
				free(result[k]);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			result[i][k] = 0;
	}
	return (result);

}
