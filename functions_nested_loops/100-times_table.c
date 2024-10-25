#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for the times table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int a = 0;
	int b;
	int numb;
	
	if ((n >= 0) && (n <= 15))
	{
		while (a <= n)
		{
			b = 0;

			while (b <= n)
			{
				numb = a * b;

				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}

				if (numb <= 9)
				{
					if (b != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(numb + '0');
				}
				else if ((numb >= 10) && (numb <= 99))
				{
					_putchar(' ');
					_putchar(numb / 10 + '0');
					_putchar(numb % 10 + '0');
				}
				else
				{
					_putchar(numb / 100 + '0');
					_putchar((numb / 10) % 10 + '0');
					_putchar(numb % 10 + '0');
				}

				b++;
			}

			_putchar('\n');
			a++;
		}
	}
}
