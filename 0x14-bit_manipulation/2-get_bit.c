/* File: 2-get_bit.c */

/**
 * get_bit- returns the value of a bit at a given index
 * @n: value
 * @index: index after n converted to bits
 *
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to get
 *
 * Return:value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
