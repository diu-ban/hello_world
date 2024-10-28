#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime = 0;
	long factor;

	while (number % 2 == 0)
	{
		largest_prime = 2;
		number /= 2;
	}

	for (factor = 3; (factor * factor) <= number; factor + 2)
	{
		while (number % factor == 0)
		{
			largest_prime = factor;
			number /= factor;
		}
	}

	if (number > 2)
	{
		largest_prime = number;
	}

	printf("%ld\n", largest_prime);

	return (0);
}
