#include "main.h"

/**
 * swap_int - this swaps the values of two intergers
 *
 * @a:first interger
 * @b:second interger
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
