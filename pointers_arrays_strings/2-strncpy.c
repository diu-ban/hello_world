#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy from src.
 *
 * Description: This function copies up to `n` characters from the `src` string
 *              to the `dest` buffer. If the length of `src` is less than `n`,
 *              the remaining bytes in `dest` are filled with null bytes.
 *              The function does not append null byte if `src` length is `n`.
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	len--;

	while (i < n)
	{
		if (i > len)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}

	return (dest);
}
