#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a newly allocated copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicate, or NULL if str is NULL or allocation fails
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int length;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	copy = malloc((length + 1) * sizeof(*copy));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		copy[i] = str[i];

	return (copy);
}
