#include "main.h"

/**
 * leet - Encode selected letters as digits.
 * @s: Writable string.
 * Return: The original pointer.
 */
char *leet(char *s)
{
	const char *letters = "aAeEoOtTlL";
	const char *digits = "4433007711";
	char *p;
	int i;

	for (p = s; *p; p++)
		for (i = 0; letters[i]; i++)
			if (*p == letters[i])
			{
				*p = digits[i];
				break;
			}
	return (s);
}
