#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string to which the source string will be appended.
 * @src: The source string to be appended to the destination string.
 * @n: The maximum number of bytes to use from src.
 *
 * Description: This function appends up to `n` characters from the `src` string
 *              to the `dest` string, overwriting the null byte at the end of `dest`,
 *              and then adds a terminating null byte. The function assumes that
 *              `dest` has enough space to hold the concatenated result.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < n)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';

	return (dest);
}
