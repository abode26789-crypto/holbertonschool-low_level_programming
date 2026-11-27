#include "main.h"

/**
 * _memset - Fill a memory region with a byte.
 * @s: Destination.
 * @b: Fill byte.
 * @n: Byte count.
 * Return: The destination.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
