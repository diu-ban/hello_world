#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Description: This function takes a pointer to a string as a parameter
 *              and iterates through each character until it reaches the
 *              null terminator, returning the total count.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
