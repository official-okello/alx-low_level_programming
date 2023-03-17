#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
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
				for (l == 0, l < 10, l++)
				{
					if (i + j + k + l == j + k + l + i)
						continue;
					else
					{
						putchar(i);
						putchar(j);
						putchar(" ");
						putchar(k)
						putchar(l);
						putchar(", ");
					}
				}
			}
		}
	}
	return (0);
}
