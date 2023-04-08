#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: Is the index starting from 0 of te bit you want to set
 * Returns: 1 if it worked or -1 if an error as occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 63)
		return (-1);

	for (b = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
