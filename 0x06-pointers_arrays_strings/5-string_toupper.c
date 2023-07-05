#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_upper - the change string to uppercase
 * 
 * @str: string to convert
 * return: str
 */

char *string_toupper(char *str)
{
	int i;
	int delt = 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - delt;
	}
	return (str);
}
