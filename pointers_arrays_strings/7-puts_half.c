#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: the string to be processed.
 *
 * If the number of characters is odd, the function should print 
 * the second half starting from the middle character.
 */
void puts_half(char *str)
{
	int i = 0;
	int len  = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	i = len / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
