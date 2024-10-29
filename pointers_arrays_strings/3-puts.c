#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: Pointer to the string to be printed
 *
 * Description: This function takes a string as a parameter and prints
 *              each character to the standard output using _putchar,
 *              followed by a newline.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
