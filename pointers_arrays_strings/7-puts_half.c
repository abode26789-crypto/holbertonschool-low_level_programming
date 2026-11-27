#include "main.h"

/**
 * puts_half - Print the second half of a string.
 * @str: String to print.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length])
		length++;
	for (i = length / 2 + length % 2; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
