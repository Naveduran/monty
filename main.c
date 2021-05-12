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
	inicialize_data(data, argc, argv, env);

	error_code = string_len = _getline(data);

	if (error_code == EOF)
	{
		free_all_data(data);
		exit(errno); /* if EOF is the fisrt Char of string, exit*/
	}
	return (0);
}
