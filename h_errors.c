#include "monty.h"
/**
 * error_manage - print error message to stout and exit_failure to stderr
 * @error: number of the error
 */
void error_manage(data_of_program *data, int error)
{

	if (error == 0)
		printf("USAGE: monty file\n");
	if (error == 1)
		printf("Error: Can't open file %s\n", data->file_name);
	if (error == 2)
		printf("L%d: unknown instruction %s\n", data->line, opcode);
	if (error == 3)
		printf("Error: malloc failed\n");
	if (error == 4)
		printf("L%d: usage: push integer\n", data->line_number);
	if (error == 5)
		printf("L%d: can't pint, stack empty\n", data->line_number);
	if (error == 6)
		printf("L%d: can't pop an empty stack\n", data->line_number);
	if (error == 7)
		printf("L%d: can't swap, stack too short\n", data->line_number);
	if (error == 8)
		printf("L%d: can't add, stack too short\n", data->line_number);
/* Liberar todo antes de salir */
	exit(EXIT_FAILURE);

}
