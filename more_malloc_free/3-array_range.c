#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: Pointer to the newly created array, or NULL if min > max
 *         or if memory allocation fails.
 */
int *array_range(int min, int max)
{
	int range;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	if (max > 2147483647 || min < -2147483647 - 1)
	{
		return (NULL);
	}
	range = max - min + 1;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
