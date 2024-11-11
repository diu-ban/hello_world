#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements, setting it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 * Return: Pointer to the allocated memory or NULL if nmemb or size is 0 or
 *         if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = size * nmemb;
	arr = malloc(total);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total; i++)
	{
		arr[i] = 0;
	}
	return ((void *)arr);
}
