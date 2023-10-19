#include "lists.h"

/**
 * list_len - prints the length of the lists
 * @h: pointer to the first node
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
	return (0);

	for (j = 1; h->next != NULL; j++)
		h = h->next;
	return (j);
}
