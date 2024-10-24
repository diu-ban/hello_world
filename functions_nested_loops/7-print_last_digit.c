#include "main.h"

/**
 * print_last_digit - Returns the last digit of a number.
 * @n: The integer to get the last digit from.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (n * -1) % 10;
	}

	return n % 10;
}
