#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the size of various data types in bytes.
 * The sizes of char, int, long int, long long int, and float 
 * are displayed to illustrate data type sizes in C.
 *
 * Return: Always returns 0 (Success).
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
