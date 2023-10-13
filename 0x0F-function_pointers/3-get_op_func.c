#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - gets the function for
 * the selected operation
 * @s: the operation
 * Return: pointer to the function that
 * corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (ops[5].f);
}
