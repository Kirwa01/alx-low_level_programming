#include "main.h"

/**
 * reverse_array - reverses the string
 * @a: string to be reversed
 * @n: number of bytes
 * Return: returns a reversed string
 */
void reverse_array(int *a, int n)
{
	int i, counter;
	
	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		i = a[counter];
		a[counter++] = a[n];
		a[n--] = i;
	}	
}
