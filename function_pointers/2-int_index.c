#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for the first element in an array that satisfies
 *             a condition.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @cmp: A pointer to the function used to compare elements of the array.
 *
 * Description: This function iterates through the array `array` of size
 *              `size` and uses the function pointed to by `cmp` to compare
 *              each element. If a match is found (i.e., `cmp` returns a
 *              non-zero value), the index of the first matching element
 *              is returned. If no match is found, or if the size is less
 *              than or equal to zero, -1 is returned.
 *
 * Return: Index of the first element for which `cmp` returns true, or
 *         -1 if no element satisfies the condition or if the input is
 *         invalid.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
