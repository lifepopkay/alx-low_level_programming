#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0 Success
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s2 == '\0')
			return (1);
		if (s2 > s1)
			return (*s1 - *s2);
		if (s1 > s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
