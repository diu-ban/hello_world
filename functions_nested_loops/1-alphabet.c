#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Description: Prints 'a' to 'z' followed by a new line
 *              using _putchar function twice.
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
