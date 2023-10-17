#include "main.h"

/**
 * print_array - prints the n elements of an array of integers
 * @a: array to be printed
 * @n: element to be printed
 * Return: n elemets of an array is printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");


}
