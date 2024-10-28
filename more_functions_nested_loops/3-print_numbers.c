#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Description: This function prints the digits from 0 to 9
 *              followed by a newline. Uses only _putchar for output.
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
