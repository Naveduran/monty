#include "monty.h"

/**
 * free_array_of_pointers - frees each pointer of an array of pointers and the
 * array too
 * @array: array of pointers
 * Return: nothing
 */
void free_array_of_pointers(char **array)
{
	int i;

	if (array != NULL)
	{
		for (i = 0; array[i]; i++)
			free(array[i]);

		free(array);
		array = NULL;
	}
}

/**
 * free_recurrent_data - free the fields needed each readed line
 * @data: struct of the program's data
 * Return: Nothing
 */
void free_recurrent_data(data_of_program *data)
{
/* Free double pointers */
	if (data->words)
		free_array_of_pointers(data->words);
}

/**
 * free_all_data - free all field of the data structure
 * @data: struct of the program's data
 * Return: Nothing
 */
void free_all_data(data_of_program *data)
{
	free_recurrent_data(data);
	if (data->file_content)
		free(data->file_content);
	if (data->file_path)
		free(data->file_path);
	if (data->lines)
		free_array_of_pointers(data->lines);
	if (data->head)
		free(data->head);
	if (data->stack)
		free_stack(data->stack);
}
