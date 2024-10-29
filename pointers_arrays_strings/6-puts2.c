#include "main.h"

/**
 * puts2 - Prints every second character of a string if its ASCII value is even.
 * @str: Pointer to the string to be processed.
 *
 * Description: This function iterates through the given string and
 *              prints every second character where the ASCII value of 
 *              the character is even. It ends with a newline.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
