#include "main.h"

/**
 * print_number - Recursive function to print a number.
 * @n: The number to print.
 */
void print_number(int n)
{
	unsigned int num = n;
	if (num < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num < 10)
	{
		_putchar(num + '0');
	}
	else
	{
		print_number(num / 10);
		_putchar(num % 10 + '0');
	} 
}
