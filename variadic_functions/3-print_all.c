#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_value - Print a single argument of the given type.
 * @type: Format character.
 * @args: Address of the argument list.
 */
static void print_value(char type, va_list *args)
{
	char *value;

	switch (type)
	{
	case 'c':
		printf("%c", va_arg(*args, int));
		break;
	case 'i':
		printf("%d", va_arg(*args, int));
		break;
	case 'f':
		printf("%f", va_arg(*args, double));
		break;
	case 's':
		value = va_arg(*args, char *);
		if (value == NULL)
			value = "(nil)";
		printf("%s", value);
		break;
	}
}

/**
 * print_all - Print each argument with a recognized type.
 * @format: List of argument types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *current = format;
	const char *separator = "";

	va_start(args, format);
	while (current != NULL && *current != '\0')
	{
		if (*current == 'c' || *current == 'i' ||
		    *current == 'f' || *current == 's')
		{
			printf("%s", separator);
			print_value(*current, &args);
			separator = ", ";
		}
		current++;
	}
	va_end(args);
	printf("\n");
}
