#include "3-calc.h"
#include <string.h>

/**
  * get_op_func - selects function associated
  * with specified operation
  * @s: the operator symbol
  * Return: a pointer to the associated function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
