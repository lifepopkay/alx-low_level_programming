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
	unsigned int i, j;
	char *mp;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	mp = (char *)malloc((i + 1) * sizeof(char));

	if (mp == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			mp[i] = str[j];
		}
	}
	return (mp);
}
