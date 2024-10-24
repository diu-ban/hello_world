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
	char ch = 'a';

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		i++;
	}    
}
