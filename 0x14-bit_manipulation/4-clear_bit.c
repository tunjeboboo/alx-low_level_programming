#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * owned bt asofeyeje
 * @n: pointer to unsigned long int
 * @index: starting from 0 of the bit you want set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 6 - 1))
		return (-1);
	a = ~(1 << index);
	*n = *n & a;

	return (1);
}
