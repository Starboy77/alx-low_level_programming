#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints integer lists
 * @h: struct pointer
 * Return: n
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
