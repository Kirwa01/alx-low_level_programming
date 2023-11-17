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
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;

	}
	return (nodes);
}
