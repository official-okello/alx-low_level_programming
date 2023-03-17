#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit decimal numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(', ');
		}
	}
	return (0);
}
