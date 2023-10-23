#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head pointer
 * Return: number of element in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t sum;

	if (h == NULL)
		return (0);
	for (sum = 0; h != NULL; sum++)
	{
		h = h->next;
	}
	return (sum);
}
