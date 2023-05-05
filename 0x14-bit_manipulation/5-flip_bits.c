#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to flip
 *@n: the bit
 *@m: unsigned long int
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
