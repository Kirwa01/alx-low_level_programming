#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: pointer to head
 * Return: freed list
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *next;

	if (head == NULL || *head == NULL)
		return;

	new = *head;
	while (new != NULL)
	{
		next = new->next;
		free(new);
		new = next;
	}
	*head = NULL;



}
