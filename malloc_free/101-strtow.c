#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' &&
		(str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of words, or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i = 0;
	int j, k, wcount, len;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	wcount = word_count(str);

	if (wcount == 0)
	{
		return (NULL);
	}

	words = malloc(sizeof(char *) * (wcount + 1));

	for (j = 0; j < wcount; j++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
		{
			len++;
		}
		words[j] = malloc(sizeof(char) * (len + 1));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; k++)
		{
			words[j][k] = str[i++];
		}
		words[j][k] = '\0';
	}
	words[j] = NULL;

	return (words);
}
