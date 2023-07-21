#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition of numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of the number
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - subtraction of numbers
 * @a: first number
 * @b: second number
 *
 * Return: subtraction of the number
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbee
 * @a: first number
 * @b: second number
 *
 * Return: multiple of number
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divide a by b
 * @a: first number
 * @b: second number
 *
 * Return: final answer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modules of number
 * @a: first number
 * @b: second number
 *
 * Return: final answer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
