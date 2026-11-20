#include "main.h"
#include <stdlib.h>

static unsigned int string_length(char *str)
{
	unsigned int length = 0;

	while (str != NULL && str[length] != 0)
		length++;
	return (length);
}

/**
 * string_nconcat - concatenates strings, copying at most n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: maximum bytes to copy from s2
 * Return: pointer to new string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *result;

	len1 = string_length(s1);
	len2 = string_length(s2);
	if (len2 > n)
		len2 = n;
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];
	result[len1 + len2] = 0;
	return (result);
}
