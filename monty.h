#ifndef MONTY_H
#define MONTY_H

#include <stdio.h> /* for printf*/
#include <unistd.h> /* for fork, execve*/
#include <stdlib.h> /* for exit failure or success*/
#include <string.h> /* for strtok, strlen*/
#include <errno.h> /* for errno and perror */
#include <sys/types.h> /* for type pid */
#include <sys/wait.h> /* for wait */
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
} stack_p;

/**
 * struct info- struct for the program's data
 */
typedef struct info
{
	unsigned int line_number;
	char *actual_line;
	char **words;

	char file_content[BUFFER_SIZE];
	char *file_path;
	char **lines;
	stack_p **head;
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
	void (*function)(stack_p **, char *);
} instruction_t;

/************** MAIN FUNCTIONS **************/

/* print error message to stout and exit_failure to stderr */
void inicialize_data(data_of_program *data, int argc, char *argv[]);
void open_file(data_of_program *data, char *argv[]);
void error(data_of_program *data, int error);
void (*opcode_list(char *instruction))(stack_p **, char *);

char **_strtok(char *text, char *delimiter);


/************** OP FUNCTIONS ***************/
/* pushes an element to the stack */
void push(stack_p **head, char  *data);
/* prints all the values on the stack, starting from the top of the stack */
void pall(stack_p **head, char *data);
/* prints the value at the top of the stack, followed by a new line */
void pint(stack_p **head, char *data);
/* removes the top element of the stack */
void pop(stack_p **head, char *data);
/* adds the top two elements of the stack */
void add(stack_p **head, char *data);
/* swaps the top two elements of the stack */
void swap(stack_p **head, char *data);
/* do nothing */
void nop(stack_p **head, char *data);
/************** LIST HELPERS ***************/

/* print all the nodes of the stack */
size_t print_stack(stack_p *stack);
/* return the number of elements in the stack */
size_t stack_len(stack_p *stack);
/* add node in stack */
stack_t *add_node(stack_p **stack, int n);
/* add node at end of a stack */
stack_t *add_node_end(stack_p **stack, int n);
/* free stack */
void free_stack(stack_p *stack);
/* fill a buff with a char */
char *_memset(char *s, char b, unsigned int n);

/* strtok */
char *_strdup(char *str);
int countargs(char *copytext, char *delimiter);
char **_split(int args, char *text, char *delimiter);

/* FREE MEMORY */
/* frees each pointer of an array of pointers and the array too */
void free_array_of_pointers(char **array);

/* free the fields needed each readed line */
void free_recurrent_data(data_of_program *data);

/* Free all field of the data structure */
void free_all_data(data_of_program *data);


#endif /* MONTY_H */
