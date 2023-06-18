
#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int w, e;

	for (w = 0; w < 99; w++)
	{
		for (e = w + 1; e < 100; e++)
		{
			putchar((w / 10) + '0');
			putchar((w % 10) + '0');
			putchar(' ');
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');

			if (w == 98 && e == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
