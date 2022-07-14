#include "lists.h"

/**
 * sum_dlistint - sum all data in list
 * @head: head node
 * Return: 0 or sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
