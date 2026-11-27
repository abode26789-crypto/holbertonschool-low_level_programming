#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Add the supplied integers.
 * @n: Number of integers.
 *
 * Return: Sum of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int total = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		total += va_arg(args, int);
	va_end(args);
	return (total);
}
