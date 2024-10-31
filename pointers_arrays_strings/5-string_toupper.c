#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @s: The string to be converted.
 *
 * Description: This function iterates through the input string and checks
 *              each character. If the character is a lowercase letter (a-z),
 *              it converts it to its corresponding uppercase letter (A-Z)
 *              by subtracting 32 from its ASCII value. The function modifies
 *              the string in place and returns the modified string.
 *
 * Return: A pointer to the converted string.
 */
char *string_toupper(char *s)
{
	char *ori = s;

	while (*s != '\0')
	{
		if ((*s >= 'a') && (*s <= 'z'))
		{
			*s -= 32;
		}
		s++;
	}

	return (ori);
}
