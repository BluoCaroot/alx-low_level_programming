#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - pointer to needed funcitons
 * @s: operator
 * Return: return of any of the others functions
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (*(ops[i].op) != *(s) && ops[i].op)
		++i;
	return (ops[i].f);
}
