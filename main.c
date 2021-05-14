#include "monty.h"
/**
 * main - entry point and general management
 * @argv: argument values
 * @argc: argument counter
 * Return: 0 if success, other value if error
 */
int main(int argc, char *argv[])
{
	data_of_program data_struct, *data = &data_struct;
	char *delim_line = "\n", *delim_spc = " ", **lines = NULL;
	int i = 0;

	if (argc < 2)
	{
		error(data, 0);
	}

	inicialize_data(data, argc, argv);
	/* printf("%s path\n", argv[1]); TEST PRINT*/
	/* open and read the data from file return a buffer to file data */
	open_file(data, argv);

	/*tokenize */
	lines = data->lines = _strtok(data->file_content, delim_line, data);
	while (lines[i] != NULL)

	{
		data->words = _strtok(lines[i], delim_spc, data);
		list(data);
		data->line_number = data->line_number + 1;
		i++;
		/*free_recurrent_data(data); free data->words */
	}
	free_all_data(data);
	return (0);
}
