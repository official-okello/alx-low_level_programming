#include "main.h"

/**
*print_line - prints a line on the screen
*@i: the counter
*@n: the length of the line
*Return: None
*/

void print_line(int n)()
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
