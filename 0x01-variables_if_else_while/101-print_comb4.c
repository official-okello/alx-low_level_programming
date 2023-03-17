#include <stdio.h>

/**
 * main - Prints combinations of 3 digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (i == 0, i < 10, i++)
	{
		for (j == 0, j < 10, j++)
		{
			for (k == 0, k < 10, k++)
			{
				if (i + j + k == j + k + i)
				{
					continue;
				}
				else if (i % 10 > 5)
					continue;
				else if (j % 10 > 5)
					continue;
				else if (k % 10 > 5)
					continue;
				else
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(", ");
				}
			}
		}
	}
	return (0);
}
