#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Run a calculator operation from the command line.
 * @argc: Argument count.
 * @argv: Argument values.
 *
 * Return: Zero on success, or the corresponding error status.
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", operation(a, b));
	return (0);
}
