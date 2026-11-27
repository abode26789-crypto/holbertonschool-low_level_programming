#include "main.h"

/**
 * cap_string - Capitalize letters at the beginning of words.
 * @s: Writable string.
 * Return: The original pointer.
 */
char *cap_string(char *s)
{
	const char *separators = " \t\n,;.!?\"(){}";
	const char *sep;
	char *p;
	int start = 1;

	for (p = s; *p; p++)
	{
		if (start && *p >= 'a' && *p <= 'z')
			*p -= 'a' - 'A';
		for (sep = separators; *sep && *p != *sep; sep++)
			;
		start = (*sep != '\0');
	}
	return (s);
}
