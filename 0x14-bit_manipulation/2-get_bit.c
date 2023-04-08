#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at a given index
 * @n: number to search and evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return:the  Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_value;

	if (index > 62)
		return (-1);

	bit_value = n >> index;

	return (bit_value & 1);
}
