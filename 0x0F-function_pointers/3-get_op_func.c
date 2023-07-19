#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
  * get_op_func - selects the correct function
  * to perform the operation
  * @s: input
  * Return: the result
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int index = 0;

	while (index < 5)
	{
		if (strcmp(s, ops[index].op) == 0)
			return (ops[index].f);
		index++;
	}

	return (0);
}
