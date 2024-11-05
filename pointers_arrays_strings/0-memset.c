#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to fill the memory area with
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	i = 0;

	if (size > 0 && size > n)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}

	return (s);
}
