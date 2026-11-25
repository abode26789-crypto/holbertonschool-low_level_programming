#include "function_pointers.h"

/**
 * array_iterator - Applies a function to each element of an array.
 * @array: The array to iterate over.
 * @size: The number of elements in the array.
 * @action: The function to call on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
