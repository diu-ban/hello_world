#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: The name to be printed
 * @f: A pointer to the function that prints the name
 *
 * Description: This function takes a string `name` and a function pointer `f`.
 *              It calls the function `f` with `name` as its argument. This is
 *              useful for passing custom print functions.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
