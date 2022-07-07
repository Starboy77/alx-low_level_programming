#include "lists.h"

/**
 * dlistint_len - length of lists
 * @h: head node
 * Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
