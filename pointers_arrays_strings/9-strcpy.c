#include "main.h"

/**
 * _strcpy - Copy a null-terminated string.
 * @dest: Destination buffer.
 * @src: Source string.
 * Return: The destination pointer.
 */
char *_strcpy(char *dest, char *src)
{
	char *out = dest;

	while (*src)
		*out++ = *src++;
	*out = '\0';
	return (dest);
}
