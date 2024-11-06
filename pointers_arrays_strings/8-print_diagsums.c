#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers, represented in a 1D array.
 * @size: The size of the square matrix (number of rows or columns).
 *
 * Description: This function calculates the sums of the primary diagonal
 * (from the top-left to the bottom-right) and the secondary diagonal
 * (from the top-right to the bottom-left) of a square matrix. The matrix is
 * passed as a pointer to an integer array in row-major order, with `size`
 * representing the number of rows and columns.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum1 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
