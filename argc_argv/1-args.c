#include <stdio.h>

/**
 * main - Print the count of user arguments.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Zero on success, or one on invalid input.
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
