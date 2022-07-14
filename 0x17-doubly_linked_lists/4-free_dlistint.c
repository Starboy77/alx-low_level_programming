#include "lists.h"


/**
 * free_dlistint - frees list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
