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

	/*tokenize */
	data->lines = _strtok(data->file_content, '\n');
	for (; data->(*lines[i]) != NULL, i++)
	{
		data->words = _strtok(*lines[i], ' ');
		opcode_list(data->(*words[0]), data->(*words[1]))
	}

	return (0);
}
