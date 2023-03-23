#include "main.h"

/**
*print_most_numbers - prints 0 to 9 but leaves out 2 and 4
*@c: ascii of digit
*Return: none
*/

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 49 && c != 52)
			_putchar(c);
		else
			continue;
	}
	_putchar('\n');
}
