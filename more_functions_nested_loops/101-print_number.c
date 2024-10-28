#include "main.h"

/**
 * print_number - Recursive function to print a number.
 * @n: The number to print.
 */
void print_number(int n)
{
	unsigned int num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	} 
}
