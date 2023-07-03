#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 *
 * @dest : destination
 * @src : source
 * @n: source size
 *
 * Return: dest
 */

char *_strncat(char *dest, char  *src, int n)
{
	int i;
	
	size_t len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';
	return (dest);
}
