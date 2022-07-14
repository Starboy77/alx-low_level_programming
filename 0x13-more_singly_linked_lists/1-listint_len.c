#include "lists.h"

/**
 * listint_len - prints length of members
 * @h: struct pointer
 * Return: n
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
