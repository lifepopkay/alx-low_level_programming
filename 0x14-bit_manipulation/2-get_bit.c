#include "main.h"

/**
 * get_bit - get the bit of given index
 * @n: number
 * @index: index of number from 0
 * Return:the value of the bit at inydex
 *  or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value_index;

	value_index = (n >> index) & 1;
		return (value_index);
	return (-1);
}
