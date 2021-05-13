#include "monty.h"
/**
 * lines_format - give format to the actual line
 * @data: data of program structure
 * Return:..
 */
void lines_format(data_of_program *data)
{
	char *line = data->actual_line;

	erase_double_spaces(line);
}

/**
 * erase_extra_spaces - erase extra spaces in an array of chars
 * @line: line to clean
 * Return:..
 */
void erase_double_spaces(char *line)
{
	char buf[512];
	int i = 0, counter = 0;

	printf("Llega=%s\n", line);

	for (; i <= strlen(line); i++)
	{
		if (line[i] == ' ' && line[i + 1] == ' ' && line[i + 2] == ' ')
		{
			i = i + 2;
		}
		else if (line[i] == ' ' && line[i + 1] == ' ')
		{
			i = i + 2;
		}
		else
		{
		}
		buf[counter] = line[i];
		counter++;
	}
	buf[counter] = '\0';

	printf("Sale=%s\n", buf);
	line = buf;
}

/**
 * str_compare - Compare two strings
 * @string1: String one, or the shorter
 * @string2: String two, or the longer
 * @number: number of characters to be compared, 0 if infinite
 * Return: 1 if the strings are equals,0 if the strings are different
 */
int str_compare(char *string1, char *string2, int number)
{
	int iterator;

	if (string1 == NULL && string2 == NULL)
		return (1);

	if (string1 == NULL || string2 == NULL)
		return (0);

	if (number == 0) /* infinite longitud */
	{
		if (strlen(string1) != strlen(string2))
			return (0);
		for (iterator = 0; string1[iterator]; iterator++)
		{
			if (string1[iterator] != string2[iterator])
				return (0);
		}
		return (1);
	}
	else /* if there is a number of chars to be compared */
	{
		for (iterator = 0; iterator < number ; iterator++)
		{
			if (string1[iterator] != string2[iterator])
				return (0);
		}
		return (1);
	}
}
