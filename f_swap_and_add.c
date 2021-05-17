#include "monty.h"
/**
 * swap - swaps the top two elements of the stack.
 * @data: pointer to the struc of info
 * Return: none
 */
void swap(data_of_program *data)
{
	stack_p *current = NULL;
	int swap, i = 0;

	if(data->head == NULL || data->head->next == NULL)
		error(data, 7);
	current = data->head;
	for (i = 1 ; current->next != NULL; current = current->next, i++)
	{}
	if (i < 2)
		error(data, 7);

	swap = current->n;
	current->n = current->prev->n;
	current->prev->n = swap;
}
/**
 * add - adds the top two elements of the stack
 * @data: data of program
 */
void add(data_of_program *data)
{
	int add = 0, i = 0;
	stack_p *current = NULL;

	if(data->head == NULL || data->head->next == NULL)
		error(data, 8);
	
	current = data->head;
	for (i = 1 ; current->next != NULL; current = current->next, i++)
	{}
	if (i < 2)
		error(data, 8);

	add = current->n + current->prev->n;
	current->prev->next = NULL;
	current->prev->n = add;
	free(current);

}
