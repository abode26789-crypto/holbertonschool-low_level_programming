#include "main.h"

/**
 * rev_string - Reverse a string in place.
 * @s: Writable string.
 */
void rev_string(char *s)
{
	char *end = s;
	char temp;

	while (*end)
		end++;
	while (s < end)
	{
		end--;
		temp = *s;
		*s++ = *end;
		*end = temp;
	}
}
