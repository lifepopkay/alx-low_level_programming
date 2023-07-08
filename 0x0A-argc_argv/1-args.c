#include <stdio.h>

/**
 * main - this print the number of arguments
 * @argc: argument count
 * @argv: array of character
 *
 * Return: Always 0
 */

int main(int argc, char *argv[]  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
