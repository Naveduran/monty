#include "shell.h"

/**
 * builtins_list - search for match and execute the associate builtin
 * @data: struct for the program's data
 * Return: Returns the return of the function executed is there is a match,
 * otherwise returns -1.
 **/
int opcode_list(data_of_program *instruction, int *data)
{
	int iterator;
	instruction_t options[] = {
		{"push", _push_instruction},
		{"pall", pall_instruction},
		{"pint", pint_instruction},
		{"pop", pop_instruction},
		{"add", add_instruction},
		{"nop", nop_instruction},
		{NULL, NULL}
	};

	/*walk through the structure*/
	for (iterator = 0; options[iterator].instruction_t != NULL; iterator++)
	{
		/*if there is a match between the given command and a builtin,*/
		if (str_compare(options[iterator].instruction, data->/*must be the instruction */ /* command_name*/, 0))
		{
			/*execute the function, and return the return value of the function*/
			return (options[iterator].function( /* **stack, line_number   */));
		}
		/*if there is no match return -1 */
	}
	return (-1);
}
