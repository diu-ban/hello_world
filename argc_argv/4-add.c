#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds positive numbers provided as command-line arguments.
 * @argc: Argument count (number of arguments passed to the program).
 * @argv: Argument vector (array of argument strings).
 *
 * Return: 0 on success, 1 if any argument contains a non-integer value.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *s = argv[i];
		int j = 0;

		while (s[j])
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
