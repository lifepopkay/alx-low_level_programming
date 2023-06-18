#include <stdio.h>

/**
 * main - Prints numbers between 000 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for  (z = y + 1; z < 10; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');

				if (x == 7 && y == 8 && z == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
