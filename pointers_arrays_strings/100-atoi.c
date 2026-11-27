#include "main.h"

/**
 * _atoi - Read the first signed integer from a string.
 * @s: String to scan.
 * Return: Parsed integer or zero if there are no digits.
 */
int _atoi(char *s)
{
	int negative = 0;
	unsigned int value = 0;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s++ == '-')
			negative = !negative;
	}
	while (*s >= '0' && *s <= '9')
		value = value * 10 + (*s++ - '0');
	return (negative ? (int)(0U - value) : (int)value);
}
