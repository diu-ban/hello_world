#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a given string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if memory allocation
 * fails or str is NULL.
 */
char *_strdup(char *str)
{
        int size = 0;
        int i;
        char *dupstr;

        if (str == NULL)
        {
                return (NULL);
        }

        while (*str[size] != '\0')
        {
                size++;
        }

        dupstr = malloc(sizeof(char) * (size + 1));
	if (dupstr == NULL)
	{
		return (NULL);
	}

        for (i = 0; i <= size; i++)
        {
                dupstr[i] = str[i];
        }

        return (dupstr);
}
