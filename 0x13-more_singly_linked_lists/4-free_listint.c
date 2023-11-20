#include "lists.h"

/**
 * free_listint - frees the list
 * @head: pointer to the head
 * Return: freed list
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;

		free(new);
	}
}
