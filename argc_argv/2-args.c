#include <stdio.h>

/**
 * main - Print each command-line argument.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Zero on success, or one on invalid input.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
