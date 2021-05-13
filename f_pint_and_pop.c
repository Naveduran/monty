#include "monty.h"
/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @data: data of program
 */
void pint(data_of_program *data)
{
	if (!data->stack)
		error(data, 5);
	printf("%d\n", (*data->stack)->n);
}

/**
 * pop - removes the top element of the stack
 * @data: data of program
 */
void pop(data_of_program *data)
{
	if (!data->stack)
		error(data, 6);
	delete_at_index(data->stack, 0);/* Erase the first node */
}
