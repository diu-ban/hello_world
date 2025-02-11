#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and checks for failure
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory, or terminates the program
 *         with status 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
