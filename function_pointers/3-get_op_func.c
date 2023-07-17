#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - select the right function depending on given char
 * @s: given char
 * Return: selected function
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
		return (ops[i].f);
		i++;
	}

	return (NULL);
}
