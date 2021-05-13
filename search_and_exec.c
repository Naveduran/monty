#include "monty.h"
/**
 * builtins_list - search for match and execute the associate builtin
 * @instructions: ..
 * @new: ...
 * @data: struct for the program's data
 * Return: Returns the return of the function executed is there is a match,
 * otherwise returns -1.
 **/
void opcode_list(data_of_program *data)
{
	int iterator = 0;
	instruction_t options[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"nop", nop},
		{"swap", swap},
		{NULL, NULL}
	};

	/*walk through the structure*/
	for (iterator = 0; options[iterator].opcode != NULL; iterator++)
	{
		/*if there is a match between the given command and a builtin,*/
		if (str_compare(options[iterator].opcode, data->words[1], 0) == 0)
			(void)options[iterator].function;
	}
}
