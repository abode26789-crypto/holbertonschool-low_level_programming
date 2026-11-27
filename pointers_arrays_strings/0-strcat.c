#include "main.h"

/**
 * _strcat - Append a string to a destination buffer.
 * @dest: Destination with room for the result.
 * @src: String to append.
 * Return: The destination.
 */
char *_strcat(char *dest, char *src)
{
	char *out = dest;

	while (*out)
		out++;
	while (*src)
		*out++ = *src++;
	*out = '\0';
	return (dest);
}
