#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * c: The character to check, represented as an integer.
 *
 * Description: This function checks whether the input character is an 
 *              alphabetic letter (A-Z, a-z) in the ASCII table.
 *
 * Return: 1 if the character is an alphabetic letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	} else
	{
		return (0);
	}
}
