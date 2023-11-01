#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: substring to be searched
 * @needle: substring to be searched from
 * Return: returns a substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	i = 0;
	return ('\0');
}
