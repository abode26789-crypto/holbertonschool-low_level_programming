#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print both diagonal sums.
 * @a: Matrix in row-major order.
 * @size: Side length.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long first = 0, second = 0;

	for (i = 0; i < size; i++, a += size)
	{
		first += a[i];
		second += a[size - 1 - i];
	}
	printf("%ld, %ld\n", first, second);
}
