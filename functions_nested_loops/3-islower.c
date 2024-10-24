#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * c: The character to check, represented as an integer.
 *
 * Description: This function checks whether the input character is a lowercase
 *              letter in the ASCII table (i.e., between 97 and 122 inclusive).
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	
	return (0);
}
