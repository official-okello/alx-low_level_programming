#include <stdio.h>

/**
 * main - Prints the numbers and letters from the hex system.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48, i < 58, i++)
	{
		putachar(i);
	}
	for (i = 97, i < 103, i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
