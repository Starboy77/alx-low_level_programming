#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node to first node
 * @head: pointer to struct pointer
 * @n: newnode data
 * Return: n
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
