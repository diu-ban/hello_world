#include <stdio.h>

/**
 * main - Prints all arguments passed to the program, each on a new line.
 * @argc: Argument count (number of arguments passed to the program).
 * @argv: Argument vector (array of argument strings).
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
