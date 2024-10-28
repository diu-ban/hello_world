#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle of size `size`
 * @size: The height of the triangle to be printed
 *
 * Description: If `size` is greater than 0, prints a triangle
 *              made of `#` characters. The triangle is right-angled
 *              and aligned to the right. If `size` is less than
 *              or equal to 0, a new line is printed.
 */
void print_triangle(int size)
{
	int row;
	int col;
	int spc;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < (size - row - 1); col++)
			{
				_putchar(' ');
			}
			for (spc = 0; spc < (row + 1); spc++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
