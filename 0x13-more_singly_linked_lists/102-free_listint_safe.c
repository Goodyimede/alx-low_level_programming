#include "lists.h"
/**
 * free_listp2 - function that frees a linked list
 * @head: head of a list.
 *
 * Return: void
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *cent;

	if (head != NULL)
	{
		cent = *head;
		while ((tmp = cent) != NULL)
		{
			cent = cent->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hemt, *new, *add;
	listint_t *cent;

	hemt = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hemt;
		hemt = new;

		add = hemt;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hemt);
				return (nnodes);
			}
		}

		cent = *h;
		*h = (*h)->next;
		free(cent);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hemt);
	return (nnodes);
}
