#include <stdio.h>
#include "main.h"

/**
 *postive_or_negative - prints the postive and negative 
 *@int: parameter  
 *Return: either positive,zero and negative in return.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positve\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
