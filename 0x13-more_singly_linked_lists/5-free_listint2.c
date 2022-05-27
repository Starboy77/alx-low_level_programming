#include "lists.h"
#include <stdlib.h>


/**
 * free_listint2 - frees list
 * @head: pointer to struct pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *cu;

	cu = *head;
	if (head == NULL)
		return;
	while (cu)
	{
		tmp = cu->next;
		free(cu);
		cu = tmp;
	}
	head = NULL;
}
