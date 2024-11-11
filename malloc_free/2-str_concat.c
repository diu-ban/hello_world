#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the newly allocated space containing the concatenated
 * string, or NULL if memory allocation fails or if either s1 or s2 is NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int size = 0;
	int y;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		size++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size++;
	}

	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (y = 0; s2[y] != '\0'; y++, i++)
	{
		str[i] = s2[y];
	}
	str[i] = '\0';

	return (str);
}
