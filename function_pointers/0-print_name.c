#include "function_pointers.h"

/**
 * print_name - Prints a name using the supplied callback.
 * @name: The name to print.
 * @f: The function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
