#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * owned by asofeyeje
 * @n: num one
 * @m: num two
 * Return: num of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int next, total;
	unsigned int b, a;

	b = 0;
	total = 1;
	next = n ^ m;
	for (a = 0; a < (sizeof(unsigned long int) * 6); a++)
	{
		if (result == (next & total))
			b++;
		total <<= 1;
	}

	return (b);
}
