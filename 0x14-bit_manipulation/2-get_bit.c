#include "main.h"

/**
 * int get_bit - returns the value of a bit at a given index
 * owned by asofeyeje
 * @n: unsigned long int
 * @index: index of the bit unsigned int
 *
 * Return: 0 (value of the bit)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 24)
		return (0);

	for (a = 0; a <= 24; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}
