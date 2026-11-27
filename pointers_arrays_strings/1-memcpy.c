#include "main.h"

/**
 * _memcpy - Copy bytes between disjoint memory regions.
 * @dest: Destination.
 * @src: Source.
 * @n: Byte count.
 * Return: The destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
