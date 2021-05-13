#include "monty.h"
/**
 * add_dnodeint_end - add node at end of a list
 * @head: pointer to head of list
 * @n: value in int node
 * Return: number of nodes printed
 */
void push(stack_p **head, char  *data)
{
	printf("this is the push func\n");
/*dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) */
        /* initialitation of variables */
        stack_p *new = NULL, *prev = NULL;
				int number = 0;
				if (!head)
					error (data, 4);
				new = malloc(sizeof(stack_t));
        if (new == NULL)
					error (data, 3);
				number = atoi(data);
				new->n = number;
        new->next = NULL;

        if (!*head)
        {
                *head = new;
                new->prev = NULL;
        }
        else
        {
                prev = *head;
                while (prev->next != NULL)
                {
                        prev = prev->next;
                }
                new->prev = prev;
                prev->next = new;
        }
}



























/**
 * pall - prints all the values on the stack, starting from the top of the stack
 * @data: data of program
 */
void pall(stack_p **head, char  *data)
{
	printf("this is the pall func\n");
	(void )data;
	(void)head;
	/*If the stack is empty, dont print anything */
}

/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @data: data of program
 */
void pint(stack_p **head, char  *data)
{
	printf("this is the pint func\n");
	(void)data;
	(void)head;
	/* if(!stack) stack esta vacio
							 error(data, 5); */
}

/**
 * pop - removes the top element of the stack
 * @data: data of program
 */
void pop(stack_p **head, char  *data)
{
	printf("this is the pop func\n");
	(void)head;
	(void)data;
	/*if(!stack) stack esta vacio
		error(data, 6);*/
}

/**
 * swap - swaps the top two elements of the stack
 * @data: data of program
 */
void swap(stack_p **head, char  *data)
{
	printf("this is the swap func\n");
	(void )data;
	(void)head;
/*if(!stack) stack contiene menos de dos elementos
		error(data, 7);*/
}

/**
 * add - adds the top two elements of the stack
 * @data: data of program
 */
void add(stack_p **head, char  *data)
{
	printf("this is the add func\n");
	(void )data;
	(void)head;
/*If the stack contains less than two elements
		error(data, 8);*/
}

/**
 * nop - doesn't do anything
 * @data: data of program
 */
void nop(stack_p **head, char  *data)
{
	printf("this is the nop func\n");
	(void )data;
	(void)head;
}
