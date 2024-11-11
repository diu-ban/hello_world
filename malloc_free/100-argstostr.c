#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: Pointer to the concatenated string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int size = 0;
	int i, y;
	int index = 0;
	char *str;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++)
		{
			size++;
		}
		size++;
	}

	str = (char *)malloc(sizeof(char) * (size + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y] != '\0'; y++, index++)
		{
			str[index] = av[i][y];
		}
		str[index] = '\n';
		index += 1;
	}
	str[index] = '\0';

	return (str);
}
