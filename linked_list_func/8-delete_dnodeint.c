#include "lists.h"
/**
 * delete_dnodeint_at_index - insert node to index possition
 * @head: pointer to pointer to head of a linked list
 * @index: index to insert a new node
 * Return: 1 if succes -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *clear = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	clear = *head;
	for (; i != index && clear != NULL; i++)
	{
		clear = clear->next;
	}
	if (index == 0) /* delete node at the begin */
	{
		if (clear->next == NULL)
		{
			free(clear);
			*head = NULL;
		}
		else
		{
		clear->next->prev = NULL;
		(*head) = clear->next;
		free(clear);
		}
	}
	else if (i == index && clear->next != NULL) /* inser node in the middle */
	{
		clear->next->prev = clear->prev;
		clear->prev->next = clear->next;
		free(clear);
	}
	else if (i == index && clear->next == NULL) /*delete node at the end */
	{
		clear->prev->next = NULL;
		free(clear);
	}
	else
		return (-1);
	return (1);
}
