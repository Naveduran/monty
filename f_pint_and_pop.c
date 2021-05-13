#include "monty.h"
/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @data: data of program
 */
void pint(data_of_program *data UNUSED)
{
	if (!data->stack)
		error(data, 5);
}

/**
 * pop - removes the top element of the stack
 * @data: data of program
 */
void pop(data_of_program *data UNUSED)
{
	if (!data->stack)
		error(data, 6);
	/*...*/
}
