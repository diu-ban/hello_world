#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: Argument count (number of arguments passed to the program).
 * @argv: Argument vector (array of argument strings).
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
