#include "monty.h"
/**
 * inicialize_data - inicialize the struct with the info of the program
 * @data: pointer to the structure of data
 * @argv: array of arguments pased to the program execution
 * @argc: number of values received from the command line
 */
void inicialize_data(int argc, char *argv[], data_of_program *data)
{
	stack_t	*stack = NULL;

	if (argc == 1 || argc > 2)
/* just 'monty' on the command line or more than two arguments */
	{
		error(data, 0);
	}
	data->file_path = argv[1];
	data->file_content = NULL;
	data->line_number = 0;
	data->actual_line = NULL;
	data->lines = NULL;
	data->words = NULL;
	data->stack = **stack;
}
