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
	inicialize_data(data, argc, argv);

	error_code = string_len = read_file(data);

	return (0);
}
