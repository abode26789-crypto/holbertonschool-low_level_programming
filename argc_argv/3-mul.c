#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two command-line integers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Zero on success, or one on invalid input.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
