#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to convert one number
 *             to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		bits += xor & 1;
		xor >>=  1;
	}
	return (bits);
}
