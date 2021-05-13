#include "monty.h"
/**
 * builtins_list - search for match and execute the associate builtin
 * @data: struct for the program's data
 * Return: Returns the return of the function executed is there is a match,
 * otherwise returns -1.
 **/
void (*opcode_list(char *instruction))(stack_p **,  char *)
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
		if (strcmp(options[iterator].opcode, instruction) == 0)
					return ((options[iterator]).function); /*options[iterator].function;*/
	}
	/* imprimri error funcion no encontrada */
	printf("error comando no encontrado");
	exit (-1);
}
