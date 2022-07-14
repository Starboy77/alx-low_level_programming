#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a particular index
 * @head: head node
 * @index: index
 * Return: Node at index or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, n = 0;
	dlistint_t *h = head;

	while (head)
	{
		head = head->next;
		n++;
	}
	head = h;
	if (index >= n)
		return (NULL);
	for (i = 0; i < (index) && head; i++)
	{
		head = head->next;
	}
	return (head);
}
