#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * owned by asofeyeje
 * @n: num one
 * @m: num two
 * Return: the num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int d, c;

	d = 0;
	result = 1;
	differnce = n ^ m;
	for (c = 0; c < (sizeof(unsigned long int) * 8); c++)
	{
		if (result == (differnce & result))
			d++;
		result <<= 1;
	}

	return (d);
}
