#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers with seperator
 *
 * @separator: string between numbers
 * @n: number of integers
 *
 * Return: Return nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
		exit(98);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);

		if (i != n - 1)
			printf("%c", *separator);
	}

	printf("\n");

	va_end(args);
}
