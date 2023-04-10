/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @num: pointer to an unsigned long integer to modify
 * @index: the index of the bit to set (starting from 0)
 *
 * Return: 1 if the operation was successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int mask = 1; // create a mask with a single 1 at the right-most bit

	if (index > 63)
		return -1;

	// shift the mask left by index bits to set the 1 at the specified index
	mask <<= index;

	// use bitwise OR to set the bit at the specified index to 1
	*num |= mask;

	return 1;
}
