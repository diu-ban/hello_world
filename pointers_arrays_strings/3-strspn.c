#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The initial segment of the string
 * @accept: The set of bytes to include in the prefix
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, match;

	while (*s)
	{
		match = 0;
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				match = 1;
				count++;
				break;
			}
		}

		if (!match)
		{
			break;
		}
		s++;
	}

	return (count);
}
