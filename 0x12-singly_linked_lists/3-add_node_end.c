#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);
/**
 * add_node_end - a function that add nodes to the end
 * of a list
 * @head: pointer to the first node
 * @str: the new node to be added at the end
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mpr;
	list_t *new_node;

	mpr = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)

	{
		*head = new_node;
		return (*head);
	}
	while (mpr->next != NULL)
		mpr = mpr->next;
	mpr->next = new_node;
	return (*head);
}
/**
 * create_node - a function that create nodes
 * @str: input string
 * Return: pointer to the malloced memory
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
 * len - length of a string
 * @str: string that its length is to be found
 * Return:size of length
 */
int len(const char *str)
{
	int j;

	if (str == NULL)
		return (0);

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}
