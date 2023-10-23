#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fmr;
	listint_t *bfr;

	fmr = head;
	bfr = head;
	while (head && fmr && fmr->next)
	{
		head = head->next;
		fmr = fmr->next->next;

		if (head == fmr)
		{
			head = bfr;
			bfr =  fmr;
			while (1)
			{
				fmr = bfr;
				while (fmr->next != head && fmr->next != bfr)
				{
					fmr = fmr->next;
				}
				if (fmr->next == head)
					break;

				head = head->next;
			}
			return (fmr->next);
		}
	}

	return (NULL);
}
