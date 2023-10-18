#include "main.h"

/**
 * print_rev - prints the script in reverse
 * @s: script printed in reverse
 *
 * Return: returns script in reverse
 */
void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count - 1 ; i >= 0 ; i--)
		putchar(s[i]);
	putchar('\0');


}
