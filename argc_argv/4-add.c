#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add the nonnegative numbers supplied on the command line.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Zero on success, or one on invalid input.
 */
int main(int argc, char **argv)
{
	int i, total = 0;
	const char *digit;

	for (i = 1; i < argc; i++)
	{
		digit = argv[i];
		if (*digit == '\0')
		{
			printf("Error\n");
			return (1);
		}
		while (*digit >= '0' && *digit <= '9')
			digit++;
		if (*digit != '\0')
		{
			printf("Error\n");
			return (1);
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
