#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all combinations of two-digit numbers from 00
 *              to 89. Each combination is separated by a comma and
 *              a space, except for the last combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int y;

	for (i = 0; i < 9; i++)
	{
		for (y = i + 1; y <= 9; y++)
		{
			putchar(i + '0');
			putchar(y + '0');

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
