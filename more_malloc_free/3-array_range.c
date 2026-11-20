#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min through max
 * @min: lower bound
 * @max: upper bound
 * Return: pointer to array, or NULL if min is greater than max
 */
int *array_range(int min, int max)
{
	int *array;
	long count, i;

	if (min > max)
		return (NULL);
	count = (long)max - (long)min + 1;
	array = malloc((unsigned long)count * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		array[i] = min + i;
	return (array);
}
