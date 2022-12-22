#include "3-calc.h"
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - get the right function for the operation
 * @s: operator
 * Return: pointer to the right function
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;
	
	while (ops[i].op != NULL)
	{
		if(!strcmp(s, ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
