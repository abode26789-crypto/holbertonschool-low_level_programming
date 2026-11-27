#include "main.h"

/**
 * print_rev - Print a string in reverse order.
 * @s: String to print.
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end)
		end++;
	while (end != s)
		_putchar(*--end);
	_putchar('\n');
}
