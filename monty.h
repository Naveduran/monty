#ifndef MONTY_H
#define MONTY_H

#include <stdio.h> /* for printf*/
#include <unistd.h> /* for fork, execve*/
#include <stdlib.h> /* for exit failure or success*/
#include <string.h> /* for strtok, strlen*/
#include <errno.h> /* for errno and perror */
#include <sys/types.h> /* for type open files */
#include <sys/stat.h> /* for use of stat function */
#include <fcntl.h> /* for open files*/

/************* MACROS **************/

/* Resume from the unused attibute */
#define UNUSED __attribute__((unused))

/* Buffer size for each read of file */
#define BUFFER_SIZE 4048

/************* STRUCTURES **************/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct info- struct for the program's data
 */
typedef struct info
{
/* data who changes every line readed*/
	unsigned int line_number;
	char *actual_line;
	char **words;

/* data who don't change*/
	char *file_path;
	char *file_content;
	char **lines;

/* the double linked list to change with operations*/
	stack_t **stack;

} data_of_program;



/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*function)(data_of_program *data);
} instruction_t;

/************** MAIN FUNCTIONS **************/

/* creates and initialize the structure data_of program */
void inicialize_data(int argc, char *argv[], data_of_program *data);

/**/
void open_file(data_of_program *data);

/* print error message to stout and exit_failure to stderr */
void error(data_of_program *data, int error);

char **_strtok(char *text, char *delimiter);

/*************** OPERATIONS **********/

/* pushes an element to the stack */
void push(data_of_program *data);

/* prints all the values on the stack, starting from the top of the stack */
void pall(data_of_program *data);

/* prints the value at the top of the stack, followed by a new line */
void pint(data_of_program *data);

/* removes the top element of the stack */
void pop(data_of_program *data);

/* swaps the top two elements of the stack */
void swap(data_of_program *data);

/* adds the top two elements of the stack */
void add(data_of_program *data);

/* doesn't do anything' */
void nop(data_of_program *data);


/************** HELPERS ***************/

/*LIST MANAGEMENT*/
/* print all the nodes of the stack */
size_t print_stack(stack_t *stack);
/* return the number of elements in the stack */
size_t stack_len(stack_t *stack);
/* add node in stack */
stack_t *add_node(stack_t **stack, int n);
/* add node at end of a stack */
stack_t *add_node_end(stack_t **stack, int n);
/* free stack */
void free_stack(stack_t *stack);

/* _STRTOK */

char *_strdup(char *str);
int countargs(char *copytext, char *delimiter);
char **_split(int args, char *text, char *delimiter);

/* OTHERS */

/* Compare two strings */
int str_compare(char *string1, char *string2, int number);

/* erase extra spaces in an array of chars */
void erase_double_spaces(char *line);

/* FREE MEMORY */
/* frees each pointer of an array of pointers and the array too */
void free_array_of_pointers(char **array);

/* free the fields needed each readed line */
void free_recurrent_data(data_of_program *data);

/* Free all field of the data structure */
void free_all_data(data_of_program *data);


#endif /* MONTY_H */
