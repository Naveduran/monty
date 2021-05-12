#include "monty.h"
/**
 *
 *
 *
 *
 *
 */
char **open_file(*argv, **head)
{
	/* initialization of vars */
	struct_stat stat_struc;
	size_of i;
	ssize_of ssize_of file_desc; read_status;
	char *file_data=[1024];
	
/* stat over absolute route to argv */
	if (stat(argv, stat_struc) == -1)
	{
		fprintf/*print error mensaje */
		exit;
	}

	/* if stat != -1 then open the file */
	file_desc = open(argv, O_RDONLY);
	if(file_desc == -1)
	{
		fprintf (asd);  /* imprimir el error*/
		exit;  /* status failure */
	}
  /*  if  the  file exist then read */
  size = stat_struc->st_size;
	read_status = read(file_desc, file_data, size);

	printf(file_data); /* TESTING PRINT */

  tokens = _strtok(file_data, ' ');
	

}
