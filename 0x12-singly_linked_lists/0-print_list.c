#include "lists.h"
#include "stdio.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list - prints the list elements
 * @h: pointer to the list
 * Return: a list of elemnts
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%lu] %s\n", (unsigned long)0, "(nil)");
		else
			printf("[%lu] %s\n",(unsigned long) h->len, h->str);
		h = h->next;
		nodes++;

	}
	return (nodes);
}
