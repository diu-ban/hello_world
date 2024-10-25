#include<stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Description: Prints the Fibonacci numbers, separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fst = 1;
	unsigned long int snd = 2;
	unsigned long int next;
	int count = 0;

	printf("%lu, %lu", fst, snd);

	while (count <= 50)
	{
		next = fst + snd;
		printf(", %lu", next);
		fst = snd;
		snd = next;
		count++;
	}

	printf("\n");

	return (0);
}
