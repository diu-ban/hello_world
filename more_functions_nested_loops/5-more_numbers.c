#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Description: This function prints the numbers from 0 to 14, each on a new
 *              line, repeated ten times. Only uses _putchar for output.
 */
void more_numbers(void)
{
	int i = 0;
	int numb;

	while (i < 10)
	{
		numb = 0; 	
		while (numb < 14)
		{
			if (numb > 9)
			{
				_putchar('1');
			}
			_putchar(numb % 10 + '0');
			numb++;
		}
		_putchar('\n');
		i++;
	}
}
