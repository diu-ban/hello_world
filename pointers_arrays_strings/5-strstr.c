#include "main.h"

/**
 * _strstr - Locates a substring within a string
 * @haystack: The main string to search within
 * @needle: The substring to locate
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int match;

	while (*haystack != '\0')
	{
		i = 0;
		while(*(haystack + i) == needle[i] && needle[i] != '\0')
		{
			i++;
			if (needle[i] == '\0')
			{
				match = 1;
			}
		}
		if (match)
		{
			return (haystack);
		}
		haystack++;
	}

	return (haystack);
}
