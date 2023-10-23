#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: head pointer to the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t sum;

	if (h == NULL)
		return (0);
	for (sum = 0; h != NULL; sum++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (sum);
}
