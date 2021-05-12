#include "monty.h"
/**
 * error_manage - print error message to stout and exit_failure to stderr
 * @error: number of the error
 */
void error_manage(int error)
{
	if (error == 0)
		printf("USAGE: monty file\n");
	if (error == 1)
		printf("Error: Can't open file %s\n", data->file_name);
	if (error == 2)
		printf("L%d: unknown instruction %s\n", data->line, opcode);
	if (error == 3)
		printf("Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
