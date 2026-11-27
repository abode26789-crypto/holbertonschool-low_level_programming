#include "function_pointers.h"

/**
 * int_index - Find the first element accepted by a callback.
 * @array: Array to search.
 * @size: Number of elements.
 * @cmp: Callback used to test each element.
 *
 * Return: The matching index, or -1 if there is no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
