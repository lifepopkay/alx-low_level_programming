#include "main.h"
#include  <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: input string.
 * Return: To dest
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	int sep_wrd[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if  (*(str + i) >= 97 && *(str + i) <= 122)
		*(str + i) -= 32;
	i++;
	while (*(str + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(str + i) == sep_wrd[j])
			{
				if ((*(str + (i + 1)) >= 97) && (*(str + (i + 1)) <= 122))
					*(str + (i + 1)) = *(str + (i + 1)) - 32;
				break;
			}
		}
	i++;
	}
	return (str);
}
