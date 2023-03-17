#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d[10] = '0123456789';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(d[i]);
	}
	putchar('\n');
	return (0);
}
