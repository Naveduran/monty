#include "monty.h"
/**
 * inicialize_data - inicialize the struct with the info of the program
 * @data: pointer to the structure of data
 * @argv: array of arguments pased to the program execution
 * @argc: number of values received from the command line
 */
void inicialize_data(data_of_program *data, int argc, char *argv[])
{
	stack_t	*stack = NULL;

	if (argc == 1 || argc > 2)
/* just 'monty' on the command line or more than two arguments */
	{
		printf("%s", ERRMSG0);
		fprinf(stderr, EXIT_FAILURE, strlen(EXIT_FAILURE))
			exit;
	}
	data->file_path = argv[1];
	data->file_content[BUFFER_SIZE]= NULL;
	data->line_counter = 0;
	data->actual_line = NULL;
	data->lines = NULL;
	data->words = NULL;
	data->stack_t = **stack;
}
