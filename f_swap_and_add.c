#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @data: data of program
 */
void swap(data_of_program *data UNUSED)
{
	int sl = stack_len(data->stack);

	if (sl < 2)
		error(data, 7);
	/*...*/
}

/**
 * add - adds the top two elements of the stack
 * @data: data of program
 */
void add(data_of_program *data UNUSED)
{
	int sl = stack_len(data->stack);

	if (sl < 2)
		error(data, 8);
	/*...*/
}
