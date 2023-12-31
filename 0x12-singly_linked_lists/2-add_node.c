#include "lists.h"
#include <stdlib.h>

/**
 * add_node - pointer to first to the first node
 * @head: data to the first element
 * @str: element string
 * Return: new node at the beginning
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
