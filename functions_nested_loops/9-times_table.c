#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints the 9 times table from 0 to 9.
 * Each row of the table corresponds to the multiplication of a number 
 * (0 through 9) by the numbers in the columns (0 through 9). Each number 
 * is printed with appropriate formatting, with two-digit numbers aligned.
 *
 * Return: void
 */
void times_table(void)
{
	int a = 0;
	int b;
	int numb;

	while (a < 10)
	{
		b = 0;
		
		while (b < 10)
		{
			numb = a * b;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (numb < 10)
			{
				_putchar(' ');
			}

			if (numb >= 10)
			{
				_putchar(numb / 10 + '0');
			}

			_putchar(numb % 10 + '0');
			b++;
		}
		_putchar('\n');
	}
}
