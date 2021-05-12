#include "lists.h"
/**
 * get_dnodeint_at_index - get node of a list
 * @head: pointer to head of list
 * @index: index to get
 * Return: value of node get it
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	for (; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
		if (head->next == NULL)
			return (NULL);
	}

	return (head);
}
