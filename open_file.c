#include "monty.h"
/**
 * open_file - open the path of the file and saves the file_content
 * @data: data of program
 * Return:..
 */

void open_file(data_of_program *data)
{
  /* initialization of vars */
	struct stat *buf = NULL;
	int file_desc;
	ssize_t status;

	status = stat(data->file_path, buf); /* Check if file exist */
	if (status == -1) /* If don't exist */
		error(data, 1);

	file_desc = open(data->file_path, O_RDONLY); /* Try to open */
	if(file_desc == -1) /* If can't be open */
		error(data, 1);

	status = read(file_desc, data->file_content, BUFFER_SIZE); /* Try to read*/
	if (status == -1) /* If it can't be read*/
		error(data, 1);

	printf("Print the content of the file for test:\n %s\n", data->file_content);
}
