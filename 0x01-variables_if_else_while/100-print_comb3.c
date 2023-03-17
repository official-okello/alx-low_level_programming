#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (i == 0, i < 10, i++)
	{
		for (j == 0, j < 10, j++)
		{
			if (i == j)
			{
				continue;
			}
			else if (i % 10 > 5)
			{
				continue;
			}
			else if (j % 10 > 5)
			{
				continue;
			}
			else if (i + j == j + i)
			{
				continue;
			}
			else
			{
				putchar(i);
				putchar(j);
				putchar(", ");
			}
		}
	}
	return (0);
}
