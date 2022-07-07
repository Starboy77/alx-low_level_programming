#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, j = 0;
	dlistint_t *head = *h, *headd = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0 && *h)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	if (idx == 1 && (*h)->next)
	{
		new->next = (*h)->next;
		new->prev = *h;
		(*h)->next->prev = new;
		(*h)->next = new;
		return (new);
	}
	while (head)
	{
		head = head->next;
		j++;
	}
	if (idx >= j || *h == NULL)
		return (NULL);
	for (i = 0; (i < (idx - 1)) && headd; i++)
	{
		headd = headd->next;
	}
	new->next = headd->next;
	headd->next->prev = new;
	new->prev = headd;
	headd->next = new;
	return (new);
}
