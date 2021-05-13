#include "monty.h"

/**
 * print_stack - print all the nodes of the stack
 * @stack: pointer to head of the stack
 * Return: number of fields printed
 */
size_t print_stack(stack_t *stack)
{
	if (!stack)
		return (0);
	printf("%d\n", stack->n);
	return (1 + print_stack(stack->next));
}

/**
 * stack_len - return the number of elements in the stack
 * @stack: pointer to head of the stack
 * Return: number of nodes in the stack
 */
size_t stack_len(stack_t *stack)
{
	size_t i = 0;

	if (stack == NULL)
		return (0);
	for (i = 0; stack != NULL; i++)
	{
		stack = stack->next;
	}
	return (i);
}

/**
 * add_node - add node in stack
 * @head: pointer to head of the stack
 * @n: value to assign to the new node
 * Return: new node's direction
 */
stack_t *add_node(stack_t **stack, int n)
{
	stack_t *new = NULL;

	if (!stack)
		return (NULL);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;

	if (!*stack)
		new->next = NULL;
	else
	{
		new->next = *stack;
		(*stack)->prev = new;
	}
	*stack = new;

	return (new);
}

/**
 * add_node_end - add node at end of a stack
 * @stack: pointer to head of stack
 * @n: return the number of elements in the stack
 * Return: new node's direction
 */
stack_t *add_node_end(stack_t **stack, int n)
{
	stack_t *new = NULL, *prev = NULL;

	if (!stack)
		return (NULL);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*stack)
	{
		*stack = new;
		new->prev = NULL;
	}
	else
	{
		prev = *stack;
		while (prev->next != NULL)
		{
			prev = prev->next;
		}
		new->prev = prev;
		prev->next = new;
	}
	return (new);
}

/**
 * free_stack - free stack
 * @head: pointer to head of the stack
 */
void free_stack(stack_t *stack)
{
	stack_t *prev = NULL;

	if (!stack)
		return;

	do {
		prev = stack->next;
		free(stack);
		stack = prev;
	} while (stack->next != NULL);

	free(stack);
}
