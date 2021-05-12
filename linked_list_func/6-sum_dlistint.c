#include "lists.h"
/**
* sum_dlistint - sum elements in a list
* @head: pointer to head of a list
* Return: add of elements
*/
int sum_dlistint(dlistint_t *head)
{
	/* inicializacion de variables */
	int add = 0;
	dlistint_t *current = NULL;

	if (head == NULL)
		return ('\0');

	current = head;
	do {
		add += current->n;
		current = current->next;
	} while (current->next != NULL);
	add += current->n;
	return (add);
}
