#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node to index possition
 * @h: pointer to pointer to head of a linked list
 * @n: value of data from new node
 * @idx: index to insert a new node
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *before = NULL, *after = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	after = *h;
	for (; i != idx && after != NULL; i++)
	{
		before = after;
		after = after->next;
	}
	if (idx == 0) /* insert node to begin */
	{
		return (add_dnodeint(h, n));
	}
	else if (i == idx && after != NULL) /* inser node in the middle */
	{
		new->next = after;
		new->prev = before;
		before->next = new;
		after->prev = new;
	}
	else if (i == idx && after == NULL) /*insert node at the end */
	{
		new->next = NULL;
		new->prev = before;
		before->next = new;
	}
	else
		return (NULL);
	return (new);
}
