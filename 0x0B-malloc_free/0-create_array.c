#include "main.h"
#include <stdlib.h>

/**
 * *create_array - this creates an array of chars
 *
 * @size: size of array
 * @c: character
 *
 * Return: characters of array
 */

char *creat_array(unsigned int size, char c)
{
	char *cp;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cp = malloc(sizeof(c) * size);

	if(cp == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cp[i] = c;
	return (cp);
}
