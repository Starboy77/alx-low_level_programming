#include "lists.h"

/**
 * insert_dnodeint_at_index - insert at index
 * @h: head node
 * @idx: index
 * @n: node data
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, j = 0;
	dlistint_t *head = *h, *headd = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (idx == 1 && (*h)->next)
	{
		return (add_dnodeint_end(h, n));
	}
	while (head)
	{
		head = head->next;
		j++;
	}
	if (idx >= j || head == NULL)
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
