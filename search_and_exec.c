#include "shell.h"

/**
 * builtins_list - search for match and execute the associate builtin
 * @data: struct for the program's data
 * Return: Returns the return of the function executed is there is a match,
 * otherwise returns -1.
 **/
int opcode_list(data_of_program *data)
{
	int iterator;
	instruction_t options[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	/*walk through the structure*/
	for (iterator = 0; options[iterator].opcode != NULL; iterator++)
	{
		/*if there is a match between the given command and a builtin,*/
		if (str_compare(options[iterator].opcode, data->instruction, 0))
		{
			/*execute the function, and return the return value of the function*/
			return (options[iterator].function(data));
		}
		/*if there is no match return -1 */
	}
	return (-1);
}
