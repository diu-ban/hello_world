#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the diagonal line should be drawn.
 *
 * Description: This function prints a diagonal line using the backslash
 *              character ('\'). The line consists of `n` backslashes,
 *              each preceded by a number of spaces corresponding to
 *              its position in the line. If `n` is less than or equal to
 *              0, only a newline is printed.
 */
void print_diagonal(int n)
{
	int reps;
	int spaces;

	if (n > 0)
	{
		for (reps = 0; reps < n; reps++)
		{
			for (spaces = 0; spaces < reps; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
