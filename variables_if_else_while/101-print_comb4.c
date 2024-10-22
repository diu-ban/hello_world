#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits.
 *              Numbers are separated by a comma followed by a space,
 *              and only the smallest combination is printed in ascending
 *              order, ensuring all digits are different.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
