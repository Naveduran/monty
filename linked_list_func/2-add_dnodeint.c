#include "lists.h"
/**
 * add_dnodeint - add node in a list
 * @head: pointer to head of list
 * @n: value in int node
 * Return: number of nodes printed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* initialitation of variables */
	dlistint_t *new = NULL;
	/*memory assing */
	if (!head)
	return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
