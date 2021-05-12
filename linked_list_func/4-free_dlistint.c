#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev = NULL;

	if (!head)
		return;

	do {
		prev = head->next;
		free(head);
		head = prev;
	} while (head->next != NULL);

	free(head);
}
