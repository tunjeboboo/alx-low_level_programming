#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: num one
 * @m: num two
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int b, a;

	b = 0;
	result = 1;
	difference = n ^ m;
	for (a = 0; a < (sizeof(unsigned long int) * 6); a++)
	{
		if (result == (difference & result))
			b++;
		result <<= 1;
	}

	return (b);
}
