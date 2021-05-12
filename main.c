#include "monty.h"

/**
 *  - ..
 * @p: ..
 * @o: ..
 * Return:..
 */

int main(int argc, char *argv[])
{
	data_of_program data_struct = {NULL}, *data = &data_struct;
	char *line_tokens, *instr_tokens **gen_tokens;

	inicialize_data(data, argc, argv);
	/* open and read the data from file return a buffer to file data */
	open_file(data);
	/* tokenized of file data */

	gen_tokens = _strtok(data->file_content, '\n');
	for (; gen_tokens[i] != NULL, i++)
	{
		fun_tokens = _strtok(gen_tokens[i], ' ');
		opcode_list(*fun_tokens[0], *fun_tokens[1])
	}

	return (0);
}
