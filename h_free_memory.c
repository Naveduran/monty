#include "monty.h"

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

/* Free arrays */
	if (data->actual_line)
		free(data->actual_line);
}

/**
 * free_all_data - free all field of the data structure
 * @data: struct of the program's data
 * Return: Nothing
 */
void free_all_data(data_of_program *data)
{
	free_recurrent_data(data);
	free_array_of_pointers(data->lines);
/* free the stack, the double linked list*/
	if (data->file_path)
		free(data->file_path);
}

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
