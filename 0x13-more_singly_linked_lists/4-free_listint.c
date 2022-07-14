#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint nodes
 * @head: struct pointer
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
