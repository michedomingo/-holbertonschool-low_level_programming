#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform operation
 * @s: operator passed from main
 * Return: pointer to function that corresponds to operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}
	return (ops[i].f);
}
