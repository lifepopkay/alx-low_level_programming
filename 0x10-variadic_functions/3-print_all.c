#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_int - will print integer
 * @array: argument to print
 */

void print_int(va_list array)
{
	printf("%d", va_arg(array, int));
}

/**
 * print_float - will print float
 * @array: argument to print
 */

void print_float(va_list array)
{
	printf("%f", va_arg(array, double));
}

/**
 * print_str - print string
 * @array: argument to print
 */

void print_str(va_list array)
{
	char *s = va_arg(array, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);
}

/**
 * print_char - prints character
 * @array: argument to print
 */

void print_char(va_list array)
{
	printf("%c", va_arg(array, int));
}

/**
 * print_all - prints all string by format
 * @format: format
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int k = 0, m;
	char *sep = "";

	ft_p prt[] = {
		{'i', print_int},
		{'f', print_float},
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
};
	va_start(args, format);

	while (format && format[k])
	{
		m = 0;
		while (m < 4)
		{
			if (format[k] == prt[m].ft)
			{
				printf("%s", sep);
				prt[m].f(args);
				sep = ", ";
				break;
			}
			m++;
		}
		k++;
	}

	printf("\n");
	va_end(args);
}
