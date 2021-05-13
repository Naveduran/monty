#include "monty.h"

/**
 * main - entry point and general management
 * @argv: argument values
 * @argc: argument counter
 * Return: 0 if success, other value if error
 */

int main(int argc, char *argv[])
{
	int i;
	data_of_program data_struct = {NULL}, *data = &data_struct;

	inicialize_data(argc, argv, data);
	/* open and read the data from file return a buffer to file data */
	open_file(data);
	/* tokenized of file data */

	/*tokenize */
	data->lines = _strtok(data->file_content, '\n');
	for (i = 0; data->(*lines[i]) != NULL; i++)
	{
		data->words = _strtok(*lines[i], ' ');
/*		opcode_list(data->(*words[0]), data->(*words[1]));*/
	}

	return (0);
}
