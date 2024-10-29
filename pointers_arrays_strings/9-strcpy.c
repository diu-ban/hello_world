#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest.
 * @dest: pointer to the destination buffer.
 * @src: pointer to the source string.
 *
 * Return: pointer to the destination string (dest).
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
