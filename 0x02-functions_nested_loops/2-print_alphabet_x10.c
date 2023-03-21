#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: None.
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
