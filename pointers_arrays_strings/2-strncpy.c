#include "main.h"

/**
 * _strncpy - Copy and pad a bounded sequence of bytes.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Number of bytes to write.
 * Return: The destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
