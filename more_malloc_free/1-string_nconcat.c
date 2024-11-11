#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to include
 *
 * Return: Pointer to the newly allocated space in memory containing s1
 *         followed by the first n bytes of s2, null-terminated. 
 *         If malloc fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, y = 0;
	unsigned int size;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	if (n >= y)
	{
		size = 1 + i + y;
	}
	else
	{
		size = 1 + i + n;
	}
	
	str = malloc(sizeof(char) * (1 + size));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (y = 0; y < size; y++)
	{
		str[i] = s2[y];
	}

	str[i] = '\0';
	return (str);
}
