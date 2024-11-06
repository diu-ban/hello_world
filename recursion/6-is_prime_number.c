#include "main.h"

/**
 * check_prime - function that checks divisibility recursively.
 * @n: the number to check.
 * @i: the current divisor.
 *
 * Return: 1 if n is prime, 0 if n is divisible by i.
 */
int prime_check(int n, int i);

/**
 * is_prime_number - checks if a number is prime.
 * @n: the number to check.
 *
 * Return: 1 if n is a prime number, 0 if it is not.
 */
int is_prime_number(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return prime_check(n, 2);
}

/**
 * check_prime - function that checks divisibility recursively.
 * @n: the number to check.
 * @i: the current divisor.
 *
 * Return: 1 if n is prime, 0 if n is divisible by i.
 */
int prime_check(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_check(n, i + 1));
}
