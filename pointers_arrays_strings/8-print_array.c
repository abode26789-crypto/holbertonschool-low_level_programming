#include "main.h"
#include <stdio.h>

/**
 * print_array - Print comma-separated integers.
 * @a: Array of integers.
 * @n: Number of elements.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
