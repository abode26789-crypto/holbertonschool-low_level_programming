#include "main.h"

/**
 * _strncat - Append at most n bytes to a string.
 * @dest: Destination buffer.
 * @src: Bytes to append.
 * @n: Maximum bytes to copy.
 * Return: The destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *out = dest;

	while (*out)
		out++;
	while (n > 0 && *src)
	{
		*out++ = *src++;
		n--;
	}
	*out = '\0';
	return (dest);
}
