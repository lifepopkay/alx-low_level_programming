#include "main.h"

/**
 * binary_to_uint - converts from binary to an integer
 * @b: binary
 *
 * Return: convert value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num = 0;
	unsigned int base_num = 1;
	unsigned int length_string;
	int i;

	for (length_string = 0; b[length_string] != '\0'; length_string++)
		;

	for (i = length_string - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			decimal_num += base_num;
		}
		base_num *= 2;
	}
	return (decimal_num);
}
