#include "lists.h"
/**
 * free_listp - function that frees a linked list
 * @head: head of the list.
 * Return: void
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hemt, *new, *add;

	hemt = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hemt;
		hemt = new;

		add = hemt;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hemt);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hemt);
	return (nnodes);
}
