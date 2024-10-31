#include "main.h"

/**
* print_number - Prints an integer using recursion
* @n: The integer to print
*
* Description: This function recursively prints an integer using _putchar,
* handling negative numbers and multiple digits. It prints each digit
* starting from most significant to least significant.
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
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
