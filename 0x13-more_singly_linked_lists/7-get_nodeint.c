#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get a node at index
 * @head: head node
 * @index: index
 * Return: node index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (c < index)
	{
		head = head->next;
		c++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
