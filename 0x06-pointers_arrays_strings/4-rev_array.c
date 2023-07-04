#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverse the content of an array
 *
 * @a: array of integer
 * @n: length of array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
