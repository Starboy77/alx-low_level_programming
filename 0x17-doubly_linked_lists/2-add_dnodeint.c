#include "lists.h"


/**
 * add_dnodeint - add new node at beginning
 * @head: pointer to head node
 * @n: new node data
 * Return: pointer to the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (&n);
}
