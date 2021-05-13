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
 * struct info- struct for the program's data
 */
typedef struct info
{
	unsigned int line_number;
	char *file_path;
	char file_content[BUFFER_SIZE];
	char *actual_line;
	char **lines;
	char **words;
	stack_t **stack;
} data_of_program;
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

/* print error message to stout and exit_failure to stderr */
void error_manage(int error, data_of_program *data);
void inicialize_data(data_of_program *data, int argc, char *argv[]);
void open_file(data_of_program *data);

/************** _STRTOK FUNCTIONS **************/

char *_strdup(char *str);
int countargs(char *copytext, char *delimiter);
char **_split(int args, char *text, char *delimiter);
char **_strtok(char *text, char *delimiter);


/************** OP FUNCTIONS ***************/



/************** LIST HELPERS ***************/

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








#endif /* MONTY_H */
