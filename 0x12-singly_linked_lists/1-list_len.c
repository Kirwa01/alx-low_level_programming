#include "lists.h"

/**
 * list_len - prints the number of elements
 * @h: element argument
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);

}

