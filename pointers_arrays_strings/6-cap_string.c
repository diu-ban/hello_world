#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be modified.
 *
 * Description: Capitalizes each word in the string. A word is defined as a
 *              sequence of characters separated by a set of delimiters:
 *              space, tabulation, newline, ',', ';', '.', '!', '?', '"',
 *              '(', ')', '{', and '}'. Each word's first character is
 *              capitalized if it is a lowercase letter.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;
	char seperator[] = " \t\n,;.!?\"(){}";

	if ((s[i] >= 'a') && (s[i] <= 'z'))
	{
		s[i] -= 32;
		i++;
	}

	while (s[i] != '\0')
	{
		int j = 0;

		while (seperator[j] != '\0')
		{
			if (s[i] == seperator[j])
			{
				if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
				{
					s[i + 1] -= 32;
				}
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
