#include "lists.h"

/**
 * print_listint - prints the list of elements
 * @h: pointer to head
 * Return: List of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
