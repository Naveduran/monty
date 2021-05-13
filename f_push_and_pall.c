#include "monty.h"
/**
 * push - pushes an element to the stack
 * @data: data of program
 */
void push(data_of_program *data)
{
	int i, new;

/*If it's not a number, give error*/
	for (i = 0; data->words[1][i]; i++)
	{
		if (isdigit(data->words[1][i]) == 0)
			error(data, 4);
	}
/*else, convert and push the new element to the beginning of the stack*/
	new = atoi(data->words[1]);
	add_node_end(&(data->head), new);
}

/**
 * pall - prints all the values on the stack, starting from the top of stack
 * @data: data of program
 */
void pall(data_of_program *data)
{
	print_stack((data->head));
}
