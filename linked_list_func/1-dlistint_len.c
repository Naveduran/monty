#include "lists.h"
/**
 * dlistint_len - print number of elements from list
 * @h: pointer to head of list
 * Return: number of nodes printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	/* initialitation of variables */
	int i = 0;

	/* firts verify the data is valid */

	if (h == NULL)
		return (0);
	/* loop to print the nodes */
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
