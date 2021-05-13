#include "monty.h"
/**
 *
 *
 *
 *
 *
 */
void *open_file(data_of_program *data) /* recive a  route to a file */
{

  /* initialization of vars */
	struct_stat stat_struc; /*struct to save the data from stack funtion */
	int size = 0;
	ssize_of  open_status, read_status;

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
	if (read(open_status, data->file_content, size) == -1)
	{
		fprintf; /*imprimir salida de error*/
		exit;
	}

	printf(file_data); /* TESTING PRINT */
	
}
