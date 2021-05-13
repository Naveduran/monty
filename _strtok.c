#include "monty.h"
/**
 * _strdup -  duplicate a string
 * @str: string
 * Return: pointer to dup or null
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;
	int j = 0;

	if (!str)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	dup = malloc(sizeof(char) * (i));

	if (dup == NULL)
		error(data, 3);

	for (; j <= i; j++)
	{
		dup[j] = str[j];
	}
	j -= 1;
	dup[j] = '\0';
	return (dup);
}
/**
 * countargs - count the arguments in the input string
 * @copytext: a copy from input string
 * @delimiter: delimiter of args
 * Return: number of words
 */
int countargs(char *copytext, char *delimiter)
{
int args = 0, k = 0;

do {
	if ((copytext[k] == *delimiter) && (copytext[k - 1] == ' '))
		k++;
	else if ((copytext[k] == *delimiter  ||
					copytext[k + 1] == '\0') &&
					(k != 0))
		args++;
	k++;
} while (copytext[k] != '\0');
return (args);
}

/**
* _split - divide a string in tokens
* @text: string to divide
* @args: expected number of tokens
* @delimiter: delimiter
* Return: gen_tokens
*/
char **_split(int args, char *text, char *delimiter)
{
	int i = 0, k = 0;
	char *currenttext = '\0';
	char **gen_tokens = '\0';

	gen_tokens = malloc(sizeof(char *) * (args + 1));
	if (gen_tokens == NULL)
		error(data, 3);

	currenttext = text; /* donde inia el argumento */
	for (i = 0; i < args; i++)
	{
		for (k = 0; text[k] != '\0'; k++)
		{
			if (text[k] == *delimiter && k == 0)
			{
				text[k] = '\0';
				text++;
				currenttext = text;
				k = -1;
			}
			else if (text[k] == *delimiter)
			{
				gen_tokens[i] = currenttext;
				text[k] = '\0';
				currenttext = &text[k + 1];
				text = &text[k + 1];
				break;
			}
			else if (text[k + 1] == '\0')
				gen_tokens[i] = currenttext;
		}
	}
gen_tokens[i] = '\0';
return (gen_tokens);
}

/**
 * _strtok - split a string in tokens and allocates memory
 * @text: pointer to string
 * @delimiter: delimiter to split strings
 * Return: **pointer to array splited
 */
char **_strtok(char *text, char *delimiter)
{
	int args = 0; /* inicia los iteradores */
	char **gen_tokens = '\0', *copytext = '\0';
	/*contador de argumentos para asignar la memoria a **pointer */

	if (!text)
		return (gen_tokens);

	copytext = _strdup(text);
	args = countargs(copytext, delimiter);
	gen_tokens = _split(args, copytext, delimiter);

	if (gen_tokens[0] == NULL)
		free(copytext);

	return (gen_tokens);
}
