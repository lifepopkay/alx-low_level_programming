#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);


/**
 * struct op - Struct op
 *
 * @ft: The format
 * @f: The function associated
 */
typedef struct op
{
	char ft;
	void (*f)(va_list);
} ft_p;


#endif
