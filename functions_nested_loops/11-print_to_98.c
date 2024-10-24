#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		if (n < 0)
		{
			_putchar('-');
			_putchar(n * -1 + '0');
		}

		if ((n >= 0) && (n <= 9))
		{
			_putchar(n + '0');
		}

		if (n > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}

		_putchar(',');
		_putchar(' ');
		n++;
	}

	while (n > 98)
	{
		if (n / 10 >= 10)
		{
			_putchar(n / 100 + '0');
			_putchar((n / 10 ) % 10 + '0');
			_putchar(n % 10);
		} else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}

		_putchar(',');
		_putchar(" ");
		n--;
	}

	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}
