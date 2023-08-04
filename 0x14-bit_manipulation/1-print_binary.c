#include "main.h"

/**
 * print_binary - prints the binary of a decimal number
 * @n: number to print in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int present_bit;

	for (i = 10; i >= 0; i--)
	{
		present_bit = n >> i;

		if (present_bit & 1)
		{
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
