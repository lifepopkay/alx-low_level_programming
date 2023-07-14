#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocated memoery using malloc
 * @b: size of integer
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *prt;

	prt = malloc(b);
	if (prt == NULL)
		exit(98);
	return (prt);
}
