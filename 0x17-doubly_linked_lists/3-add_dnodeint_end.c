#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: head nide pointer
 * @n: new data
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (h->next)
	{
		h = h->next;
	}
	new->next = NULL;
	new->prev = h;
	h->next = new;
	return (new);
}
