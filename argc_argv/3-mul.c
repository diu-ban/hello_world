#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers provided as command-line arguments.
 * @argc: Argument count (number of arguments passed to the program).
 * @argv: Argument vector (array of argument strings).
 *
 * Return: 0 on success, 1 if the program does not receive 2 arguments.
 */
int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
