#include "main.h"

/**
 * leet - a string that encodes to 1337
 * @i:script that is encoded
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: returns an encoded script
 */
char *leet(char *i)
{
	int strlen, leetcount;
	char leetnums[] = "43071";
	char leetletter[] = "aAeEoOtTlL";

	strlen = 0;
	while (i[strlen] != '\0')
	{
		leetcount = 0;
		while (leetcount < 10)
		{
			if (leetletter[leetcount] == i[strlen])
			{
				i[strlen] = leetnums[leetcount];
			}
			leetcount++;
		}
		strlen++;
	}
	return (i);
}
