#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The double pointer to be updated to point to `to`.
 * @to: The char pointer to be assigned to `*s`.
 *
 * Description: This function takes a double pointer `s` and sets it to
 * point to the address specified by `to`.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
