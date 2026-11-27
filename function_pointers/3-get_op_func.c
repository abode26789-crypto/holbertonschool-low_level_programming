#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - Select an arithmetic function by its operator.
 * @s: Operator string.
 *
 * Return: Matching function pointer, or NULL.
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

	if (s == NULL || s[0] == '\0' || s[1] != '\0')
		return (NULL);
	while (ops[i].op != NULL && ops[i].op[0] != s[0])
		i++;
	return (ops[i].f);
}
