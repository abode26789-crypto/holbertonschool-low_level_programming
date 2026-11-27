#include "main.h"

/**
 * _strchr - Locate the first matching character.
 * @s: Input string.
 * @c: Character to find.
 * Return: Pointer to the match or null.
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	return (*s == c ? s : 0);
}
