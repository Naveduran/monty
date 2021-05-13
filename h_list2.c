#include "monty.h"
/**
 * delete_at_index - delete node at index position
 * @stack: pointer to the head of stack
 * @index: index
 * Return: 1 if succes -1 if failed
 */
int delete_at_index(stack_p **stack, unsigned int index)
{
	stack_p *clear = NULL;
	unsigned int i = 0;

	if (stack == NULL || *stack == NULL)
		return (-1);
	clear = *stack;
	for (; i != index && clear != NULL; i++)
	{
		clear = clear->next;
	}
	if (index == 0) /* delete node at the begin */
	{
		if (clear->next == NULL)
		{
			free(clear);
			*stack = NULL;
		}
		else
		{
			clear->next->prev = NULL;
			(*stack) = clear->next;
			free(clear);
		}
	}
	else if (i == index && clear->next != NULL) /* delete node in the middle */
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
