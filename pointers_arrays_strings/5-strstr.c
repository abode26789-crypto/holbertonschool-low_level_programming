#include "main.h"

/**
 * _strstr - Find a substring.
 * @haystack: String to search.
 * @needle: Substring to locate.
 * Return: First match or null.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle)
		return (haystack);
	for (; *haystack; haystack++)
	{
		h = haystack;
		n = needle;
		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return (haystack);
	}
	return (0);
}
