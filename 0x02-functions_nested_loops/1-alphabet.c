#include <stdio.h>
#include "main.h"

/**
 * main-prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar(10);
}
