#include "lists.h"
/**
 * add_dnodeint_end - add node at end of a list
 * @head: pointer to head of list
 * @n: value in int node
 * Return: number of nodes printed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* initialitation of variables */
	dlistint_t *new = NULL, *prev = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		prev = *head;
		while (prev->next != NULL)
		{
			prev = prev->next;
		}
		new->prev = prev;
		prev->next = new;
	}
	return (new);
}
