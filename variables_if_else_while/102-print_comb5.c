#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *              The numbers range from 00 to 99, and are printed in ascending
 *              order, separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
