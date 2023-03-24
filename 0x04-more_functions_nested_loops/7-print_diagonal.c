#include "main.h"

/**
*print_diagonal - prints a diagonal on the screen
*@n: the length of the diagonal
*Return: None
*/

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('\\');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
