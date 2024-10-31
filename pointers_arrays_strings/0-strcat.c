#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which the source string will be appended.
 * @src: The source string to be appended to the destination string.
 *
 * Description: This function appends the `src` string to the `dest` string,
 *              overwriting the null byte at the end of `dest`, and then adds
 *              a terminating null byte. The function assumes that `dest` has
 *              enough space to hold the concatenated result.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';

	return (dest);
}
