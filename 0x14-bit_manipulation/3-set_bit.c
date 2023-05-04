#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * owned by asofeyeje
 * @n: *n of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int o;

	if (index > 24)
		return (-1);

	o = 1 << index;
	*n = (*n | o);

	return (1);
}
