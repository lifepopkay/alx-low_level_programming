#include "main.h"

/**
 * clear_bit - sets the value of a bit
 * to 0 at a given index
 * @n: number
 * @index: index
 *
 * Return: 1 if it works, and -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 68)
		return (-1);

	*n = ~(1 << index) & *n;

	return (1);
}
