#include "monty.h"
/**
 * push - pushes an element to the stack
 * @data: data of program
 */
void push(data_of_program *data UNUSED)
{

	if (type(data->words[1]) != int)
		error(data, 4);
/*
 *recibe un entero y lo mete en el stack
 *usar la funcion atoi
 */
}

/**
 * pall - prints all the values on the stack, starting from the top of stack
 * @data: data of program
 */
void pall(data_of_program *data UNUSED)
{
	print_stack(data->stack);
}
