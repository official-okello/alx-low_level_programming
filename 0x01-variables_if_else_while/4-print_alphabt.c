#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alph[i] != 'q' && alph[i] != 'e')
		{
			putchar(alph[i]);
		}
	}
	putchar('\n');
	return (0);
}
