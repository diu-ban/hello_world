#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Description: Prints 'a' to 'z' followed by a new line
 *              using _putchar function twice.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
