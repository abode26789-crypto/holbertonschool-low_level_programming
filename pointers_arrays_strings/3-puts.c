#include "main.h"

/**
 * _puts - Print a string followed by a newline.
 * @str: String to print.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
