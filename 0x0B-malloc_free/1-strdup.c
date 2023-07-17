#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: memory pointer - mp
 */

char *_strdup(char *str)
{
	unsigned int size, j;
	char *mp;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	mp = malloc((size + 1) * sizeof(char));

	if (mp == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		mp[j] = str[j];
	}
	return (mp);
}
