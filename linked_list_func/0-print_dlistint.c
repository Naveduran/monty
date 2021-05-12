#include "lists.h"
/**
 * print_dlistint - print n field to list
 * @h: pointer to head of list
 * Return: number of fields printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
