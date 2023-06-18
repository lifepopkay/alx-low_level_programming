#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int k, m;

        for (k = 0; k < 9; k++)
        {
                for (m = k + 1; m < 10; m++)
                {
                        putchar((k % 10) + '0');
                        putchar((m % 10) + '0');

                        if (k == 8 && m == 9)
                                continue;

                        putchar(',');
                        putchar(' ');
                }
        }
        putchar(10);
        return (0);
}
