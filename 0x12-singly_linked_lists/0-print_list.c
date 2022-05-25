#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h->next != NULL)
	{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			n++;
	}
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	n++;
	return (n);
}
