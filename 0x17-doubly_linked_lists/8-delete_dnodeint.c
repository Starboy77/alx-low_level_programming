#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 * @head: head node
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, n = 0;
	dlistint_t *h = *head, *tmp, *h1 = *head;

	if (index == 0 && *head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (h1)
	{
		h1 = h1->next;
		n++;
	}
	if (index >= n || *head == NULL)
		return (-1);
	for (i = 0; i < (index); i++)
	{
		h = h->next;
	}
	h->prev->next = h->next;
	h->next->prev = h->prev;
	free(h);
	return (1);
}
