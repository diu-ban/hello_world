#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to be processed
 * @size: The size of the array
 * @action: A pointer to the function to be executed on each element
 *
 * Description: This function takes an array, its size, and a function pointer.
 *              It iterates through the array, calling the function `action`
 *              on each element. The `action` function should take an `int`
 *              as an argument and perform any desired operation.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
