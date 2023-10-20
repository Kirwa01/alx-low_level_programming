#include "main.h"

/**
 * string_toupper - converts a script to upper case
 * @i:script to be converted to uppercase
 * Return:returns uppercase
 */
char *string_toupper(char *i)
{
	int strlen;

	strlen = 0;

	while (i[strlen] != '\0')
	{
		if (i[strlen] >= 97 && i[strlen] <= 122)
		{
			i[strlen] = i[strlen] - 32;
		}
		strlen++;
	}
	return (i);
}
