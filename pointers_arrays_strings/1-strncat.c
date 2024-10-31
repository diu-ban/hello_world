#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to use from src.
 *
 * Description: This function appends src to dest, using at most n bytes from src.
 * If src contains n or more bytes, it does not need to be null-terminated.
 * The destination string must have enough space to hold the result.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;
	int size = sizeof(dest);

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < n && src[i] != '\0' && size > n)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';

	return (dest);
}
