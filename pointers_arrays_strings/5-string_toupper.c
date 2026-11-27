#include "main.h"

/**
 * string_toupper - Convert lowercase ASCII letters to uppercase.
 * @s: Writable string.
 * Return: The original pointer.
 */
char *string_toupper(char *s)
{
	char *p;

	for (p = s; *p; p++)
		if (*p >= 'a' && *p <= 'z')
			*p -= 'a' - 'A';
	return (s);
}
