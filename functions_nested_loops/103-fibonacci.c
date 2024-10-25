#include<stdio.h>

unsigned long int fibo(int n);

/**
 * main - Entry point of the program
 *
 * Description: Calculates the sum of even Fibonacci numbers
 * that do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 3;
	unsigned long int sum = 2;
	unsigned long int next = 2;

	while (next <= 4000000)
	{
		next = fibo(count);

		if (next % 2 == 0)
		{
			sum += next;
		}

		count++;
	}

	printf("%lu\n", sum);

	return (0);
}

/**
 * fibo - Recursively calculates the nth Fibonacci number
 * @n: The position in the Fibonacci sequence
 *
 * Return: The nth Fibonacci number
 */
unsigned long int fibo(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n == 2)
	{
		return (2);
	}

	return (fibo(n-2) + fibo(n-1));
}
