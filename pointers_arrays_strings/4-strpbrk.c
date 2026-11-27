#include "main.h"

/**
 * _strpbrk - Find the first occurrence of an accepted byte.
 * @s: Input string.
 * @accept: Set of characters.
 * Return: Pointer to the match or null.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (; *s; s++)
		for (p = accept; *p; p++)
			if (*s == *p)
				return (s);
	return (0);
}
