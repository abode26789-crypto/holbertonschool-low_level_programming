#include "main.h"

/**
 * _strspn - Measure the initial run of accepted bytes.
 * @s: Input string.
 * @accept: Accepted characters.
 * Return: Length of the prefix.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (s[count])
	{
		for (p = accept; *p && *p != s[count]; p++)
			;
		if (!*p)
			break;
		count++;
	}
	return (count);
}
