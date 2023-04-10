/**
 * get_bit - get the value of a bit at a given index
 * @num: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int num, unsigned int index)
{
    // Check if index is within bounds of the number
    if (index >= sizeof(unsigned long int) * 8)
        return (-1); // Return -1 if index is invalid

    // Shift the number to the right by index bits to isolate the bit at index
    unsigned long int mask = num >> index;

    // Extract the bit at index by performing a bitwise AND with 1
    int bit_value = mask & 1;

    return bit_value;
}
