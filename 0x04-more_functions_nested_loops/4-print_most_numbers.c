#include "main.h"

/**
*print_most_numbers - prints 0 to 9 but leaves out 2 and 4
*Return: none
*/

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
		else
			continue;
	}
	_putchar('\n');
}
