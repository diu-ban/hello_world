#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 0 to 9, separated by commas and
 *              followed by a space.
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i);

		if (i < 9)
		{
		 	putchar(',');
		  	putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}  
