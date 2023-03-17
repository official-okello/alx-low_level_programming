#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit decimal numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(j);
		if (j == 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
