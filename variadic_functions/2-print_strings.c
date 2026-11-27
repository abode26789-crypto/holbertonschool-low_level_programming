#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings with an optional separator.
 * @separator: Separator between strings.
 * @n: Number of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		value = va_arg(args, char *);
		if (value == NULL)
			value = "(nil)";
		printf("%s", value);
	}
	va_end(args);
	printf("\n");
}
