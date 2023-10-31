#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer to the string
 * Return: Returns a copy of a newly allocated space
 */
char *_strdup(char *str)
{
	int i;
	int count = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		str[i] = copy[i];
	return (copy);
}
