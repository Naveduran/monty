#include "monty.h"
/**
 * error - print error message to stout and exit_failure to stderr
 * @data: data of program
 * @error: number of the error
 */
void error(data_of_program *data, int error)
{
	if (error == 0)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (error == 1)
		perror("Error: Can't open file %s\n", data->file_path);
	if (error == 2)
		perror("L%d: unknown instruction %s\n", data->line_number, data->words[0]);
	if (error == 3)
		perror("Error: malloc failed\n");
	if (error == 4)
		perror("L%d: usage: push integer\n", data->line_number);
	if (error == 5)
		perror("L%d: can't pint, stack empty\n", data->line_number);
	if (error == 6)
		perror("L%d: can't pop an empty stack\n", data->line_number);
	if (error == 7)
		perror("L%d: can't swap, stack too short\n", data->line_number);
	if (error == 8)
		perror("L%d: can't add, stack too short\n", data->line_number);
	free_all_data(data);
	exit(EXIT_FAILURE);
}
