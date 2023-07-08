#include <stdio.h>

/**
 * main - this print all arguments
 * @argc: argument count
 * @argv: array of character
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		for  (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
