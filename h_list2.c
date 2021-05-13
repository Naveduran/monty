#include "monty.h"
/**
 * delete_at_index - delete node at index position
 * @stack: pointer to the head of stack
 * @index: index
 * Return: 1 if succes -1 if failed
 */
void delete_at_end(stack_p *stack)
{
	stack_p *pop = NULL;
	pop = stack;
	if(pop->next == NULL )
	{
		pop->prev->next = NULL;
		free(pop);
		return;
	}
	delete_at_end(pop->next);
}
