#include "main.h"

/**
 * _strcmp - Compare two strings byte by byte.
 * @s1: First string.
 * @s2: Second string.
 * Return: Difference between the first unequal bytes or zero.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
