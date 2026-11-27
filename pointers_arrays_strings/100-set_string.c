#include "main.h"

/**
 * set_string - Assign a new address to a string pointer.
 * @s: Address of the pointer to update.
 * @to: New pointer value.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
