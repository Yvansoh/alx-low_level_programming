#include "main.h"

/**
 * flip_bits - Calculates the number of bits needed to flip
 * from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_xor = n ^ m;
	unsigned int count = 0;

	while (bit_xor > 0)
	{
		count += bit_xor & 1;
		bit_xor >>= 1;
	}

	return (count);
}
