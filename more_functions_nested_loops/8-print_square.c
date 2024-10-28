#include "main.h"

/**
 * print_square - Prints a square of size `size`
 * @size: The size of the square to be printed
 *
 * Description: If `size` is greater than 0, prints a square
 *              of `#` characters. Each side of the square
 *              is of length `size`. If `size` is less than or
 *              equal to 0, a new line is printed.
 */
void print_square(int size)
{
	int row = 0;
	int col;

	if (size > 0)
	{
		while (row < size)
		{
			col = 0;

			while (col < size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
