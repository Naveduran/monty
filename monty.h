#ifndef HOLBERTON_H
#define HOLBERTON_H

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

/* ERROR MESSAGES */

#define ERRMSG0 "USAGE: monty file"

#define ERRMSG1 "Error: Can't open file $Error: Can't open file <file>"

#define ERRMSG2 "L<line_number>: unknown instruction <opcode>"

#define ERRMSG3 "Error: malloc failed"

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
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct info- struct for the program's data
 */
typedef struct info
{
	int line_counter;
	char *file_path;
	char *file_name;
	char *file_content;
	char **stack_t;
} data_of_program;

/************** MAIN FUNCTIONS **************/



/************** OP FUNCTIONS ***************/



/************** HELPERS ********************/


#endif /* HOLBERTON_H */
