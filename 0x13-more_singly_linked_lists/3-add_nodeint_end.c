#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - append node to the end
 * @head: pointer to struct pointer
 * @n: node data
 * Return: head node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode, *h;

	lastnode = malloc(sizeof(listint_t));
	if (lastnode == NULL)
		return (NULL);
	lastnode->n = n;
	lastnode->next = NULL;
	if (*head == NULL)
		*head = lastnode;
	else
	{
		h = *head;
		while (h->next)
		{
			h = h->next;
		}
		h->next = lastnode;
	}
	return (h);
}
