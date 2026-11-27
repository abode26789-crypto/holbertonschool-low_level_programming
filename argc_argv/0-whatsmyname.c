#include <stdio.h>

/**
 * main - Print the program name.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Zero on success, or one on invalid input.
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
