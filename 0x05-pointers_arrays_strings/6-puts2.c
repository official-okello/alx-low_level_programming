#include "main.h"

/**
*puts2 - prints any other character in a string
*@str: string
*/

void puts2(char *str)
{
	int x;

	for (x in str)
	{
		x *= 2;
		_putchar(str[x]);
	}
	_putchar('\n');
}
