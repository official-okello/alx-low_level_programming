#include "main.h"

/**
*print_numbers - prints 0 to 9
*@c: ascii of number
*Return: None
*/

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
