#include "monty.h"
/**
 * inicialize_data - inicialize the struct with the info of the program
 * @data: pointer to the structure of data
 * @argv: array of arguments pased to the program execution
 * @argc: number of values received from the command line
 */
void inicialize_data(data_of_program *data, int argc, char *argv[])
{
	 stack_p **stack = NULL;
  /* just 'monty' on the command line or more than two arguments */
	if (argc == 1 || argc > 2)
	{
		error(data, 0);
	}
	data->file_path = argv[1];
	data->lines = NULL;
	data->words = NULL;
	data->head = stack;
}
