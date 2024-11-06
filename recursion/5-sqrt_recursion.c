#include "main.h"

/**
 * sqrt_subtract - helper function to find square root by subtracting odd numbers.
 * @n: the number from which odd numbers are being subtracted.
 * @odd: the current odd number to subtract.
 *
 * Return: the number of successful subtractions (the square root) or -1 if n goes negative.
 */
int sqrt_subtract(int n, int odd);

/**
 * _sqrt_recursion - returns the natural square root of a number using recursion.
 *                   It uses the subtracting odd numbers method.
 * @n: the number to find the square root of.
 *
 * Return: the natural square root of n, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return sqrt_subtract(n, 1);
}

int sqrt_subtract(int n, int odd)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (1 + sqrt_subtract(n - odd, odd + 2));
}
