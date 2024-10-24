#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		int a = n;
		
		if (n < 0)
		{
			a = -n;
			_putchar('-');
		}

		if (a / 10 >= 10)
		{
			_putchar(a / 100 + '0');
			_putchar((a / 10) % 10 + '0');
			_putchar(a % 10 + '0');
		}

		if (a / 10 < 10)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}

		_putchar(',');
		_putchar(' ');

		if (n < 98)
		{
			n++;
		}

		if (n > 98)
		{
			n--;
		}
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
