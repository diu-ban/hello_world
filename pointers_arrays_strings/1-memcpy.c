#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination pointer where content is copied to
 * @src: Source pointer from where content is copied
 * @n: Number of bytes to copy
 *
 * Return: Pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int size = 0;
	unsigned int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		size++;
	}
	i = 0;

	if (size > n)
	{
		for (i = 0; i < n; i++)
		{
			*dest = src[i];
			dest++;
		}
	}

	return (dest);
}
