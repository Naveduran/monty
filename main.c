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
	int i = 0;

	if (argc > 2)
	{
		error(data, 0);
	}

	inicialize_data(data, argc, argv);
	/* open and read the data from file return a buffer to file data */
	open_file(data, argv);
	tokenize_new_line(data);

	while (data->lines[i] != NULL)
	{
		list(data);
		data->line_number = data->line_number + 1;
		i++;
	}
	free_all_data(data);
	return (0);
}

/**
 * tokenize_new_line - ..
 * @data: ..
 */
void tokenize_new_line(data_of_program *data)
{
	const char *new_line = "\n";
	char *token;
	int i;

	token = strtok(data->file_content, new_line);
	data->lines[0] = token;

	for(i = 1; token != NULL; i++)
	{
		token = strtok(NULL, new_line);
		data->lines[i] = token;
		printf("line[%d]= %s", i, data->lines[i]);
	}
}

/**
 * tokenize_to_words - ..
 * @data: ..
 */
void tokenize_to_words(data_of_program *data)
{
	const char *space = " ";
	char *token;
	int i;

	token = strtok(data->file_content, space);
	data->words[0] = token;

	for(i = 1; token != NULL; i++)
	{
		token = strtok(NULL, space);
		data->words[i] = token;
		printf("word[%d]= %s", i, data->words[i]);
	}
}
