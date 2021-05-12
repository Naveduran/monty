#include "monty.h"
/**
 *
 *
 *
 *
 *
 */
char **open_file(char *file_path) /* recive a  route to a file */
{

  /* initialization of vars */
	struct_stat stat_struc; /*struct to save the data from stack funtion */
	int size = 0;
	ssize_of  open_status, read_status; /* var to save status from read and open functions */
	char *file_data[BUFFER_SIZE]; /* buffer to save the read data from file */
	
  /* stat over absolute route to argv */
	if (stat(file_path, stat_struc) == -1)
	{
		fprintf /*print error mensaje */
		exit;
	}

	/* if stat != -1 then open the file */
	open_status = open(file_path, O_RDONLY);
	if(file_desc == -1)
	{
		fprintf (asd);  /* imprimir el error*/
		exit;  /* status failure */
	}
  /*  if  the  file exist then read */
  size = stat_struc->st_size;
	read_status = read(open_status, file_data, size);

	printf(file_data); /* TESTING PRINT */

  tokens = _strtok(file_data, ' ');
	
	return (tokens);
}
