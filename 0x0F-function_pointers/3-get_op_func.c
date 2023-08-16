#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select the correct operator
 *
 * @s: op to check
 *
 * Return: pointer to func that to corresponds to the op
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
	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && ops[i].op[1] == s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
