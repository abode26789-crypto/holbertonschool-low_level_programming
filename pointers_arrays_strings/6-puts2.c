#include "main.h"

/**
 * puts2 - Print characters at even indices.
 * @str: String to print.
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str++);
		if (*str)
			str++;
	}
	_putchar('\n');
}
