#include <stdio.h>

/**
 * main - Prints lowercase and uppercase alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'a'; c <= 'z'; c++)
		putchar(c - 32);

	putchar('\n');

	return (0);
}
