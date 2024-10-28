#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of underscores to print.
 *
 * Description: This function prints a line of underscores based on the
 *              value of `n`. If `n` is 0 or less, only a newline is printed.
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
