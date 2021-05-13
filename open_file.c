#include "monty.h"
/**
 * _memset -  fills memory with a constant byte.
 *@s:the pointer
 *@b:the constant byte
 *@n:the bytes
 *Return: return 0
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
                s[i] = b;
        return (s);
}
/**
 * open_file - open the path of the file and saves the file_content
 * @data: data of program
 * @argv: route to monty file
 * Return: none
 */
void open_file(data_of_program *data, char *argv[])
{
/* initialization of vars */
	struct stat stat_struc;
	int size = 0;
	ssize_t  open_status = 0;

  /* stat over absolute route to argv */
	if (stat(argv[1], &stat_struc) == -1)
		error (data, 1);
	else
	{
    /* if stat != -1 then open the file */
		open_status = open(argv[1], O_RDONLY);
		if(open_status == -1)
			error (data, 1);  /* status failure */
		/*  if  the  file exist then read it */
		size = (stat_struc).st_size;
		_memset(data->file_content, '\0', BUFFER_SIZE);
		if (read(open_status, data->file_content, size) == -1)
					error (data, 1);
	}
}
