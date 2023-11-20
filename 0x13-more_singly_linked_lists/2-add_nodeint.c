#include "lists.h"

/**
 * add_nodeint - add nodes at the beggining of the list
 * @head: pointer to the head
 * @n: new node
 * Return:address of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
