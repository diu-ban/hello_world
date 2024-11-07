#include <stdlib.h>
#include <stdio.h>

/**
 * main - Calculates the minimum number of coins to make change for a given
 *        amount.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings representing the arguments passed.
 *
 * Return: 0 if the program runs successfully, 1 if there is an error (wrong 
 *         number of arguments). 0 if the amount is negative.
 */
int main(int argc, char *argv[])
{
	int change;
	int coins;
	int cent[5] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins += change / cent[i];
		change %= cent[i];
	}

	printf("%d\n", coins);
	return (0);
}
