#include <stdio.h>
/**
 *
 * main - start point
 *
 * Return: denoted zero
 */

int main(0)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);


}
