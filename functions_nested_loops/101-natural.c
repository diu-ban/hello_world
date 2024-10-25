#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Sums multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int ptr = 1;

	while (ptr < 1024)
	{
		if ((ptr % 3 == 0) || (ptr % 5 == 0))
		{
			sum += ptr;
		}
		ptr++;
	}
	
	printf("%d\n", sum);

	return (0);
}
