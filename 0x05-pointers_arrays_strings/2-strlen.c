#include "main.h"

/**
 * _strlen - this returns the length of a string
 *
 * @s:parameter for string
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
