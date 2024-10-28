#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 excluding 2 and 4
 *
 * Description: This function prints the digits from 0 to 9, except
 *              for 2 and 4, followed by a newline. Uses _putchar for output.
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if ((a != 2) && (a != 4))
		{
			_putchar(a + '0');
		}
		a++;
	}

	_putchar('\n');
}
