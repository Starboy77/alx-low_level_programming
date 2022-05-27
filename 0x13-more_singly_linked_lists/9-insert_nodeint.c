#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at index
 * @head: node pointer
 * @idx: index
 * @n: node data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h;
	unsigned int c = 0;

	h = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while (c < idx - 1)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
		c++;
	}
	new->n = n;
	new->next = h->next;
	h->next = new;
	return (h->next);
}
