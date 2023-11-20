#include "lists.h"

/**
 * add_nodeint - adds node at the end of a list
 * @head: pointer to the head
 * @n: holds the new data
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	{
		if (*head == NULL)
		{
			*head = newnode;
		}
		else
		{
			listint_t *temp = *head;

			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newnode;
		}
		return (newnode);
	}

}
