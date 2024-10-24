#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints the alphabet in lowercase
 *              from 'a' to 'z', followed by a new line.
 *              It uses the _putchar function to print each character.
 */
void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
