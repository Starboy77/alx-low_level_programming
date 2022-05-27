#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes head node
 * @head: pointer to struct pointer
 * Return: data
 */

int pop_listint(listint_t **head)
{
	int c;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = (*head)->next;
	c = (*head)->n;
	free(*head);
	*head = tmp;
	return (c);
}
