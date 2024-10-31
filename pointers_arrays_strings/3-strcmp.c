#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Description: This function compares two strings character by character
 *              until a difference is found or the end of either string.
 *              If both strings are equal, it returns 0, otherwise, it returns
 *              non zero value.
 *
 * Return: 0 if the strings are equal, a positive or negative integer based on
 *         lexicographical order if they are different.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
