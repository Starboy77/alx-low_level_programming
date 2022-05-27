#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of node data
 * @head: head node
 * Return: sun
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
