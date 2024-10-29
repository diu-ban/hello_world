#include "main.h"
#include "stdio.h"

/**
 * print_array - prints the elements of an array.
 * @a: pointer to the array of integers.
 * @n: number of elements to print from the array.
 *
 * This function prints the first n elements of the array,
 * followed by a comma and space, except for the last element,
 * which is followed by a newline.
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;
		for (i = 0; i < n; i++)
		{
			if(i != (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
			printf("%d\n", a[i]);
			}
		}
	}
	else
	{
		printf("\n");
	}
}
