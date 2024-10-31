#include "main.h"

/**
 * reverse_array - Reverses the contents of an integer array.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an array of integers and reverses
 *              its elements in place. It swaps elements from both ends
 *              moving towards the center until the array is reversed.
 */
void reverse_array(int *a , int n)
{
	if (n > 1)
	{
		int i = 0;
		int temp;

		while (i < n / 2)
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
			i++;
		}
	}
}
