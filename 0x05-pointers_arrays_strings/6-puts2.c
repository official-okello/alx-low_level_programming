#include "main.h"

/**
*puts2 - prints any other character in a string
*@str: string
*/

void puts2(char *str)
{
	int x = 0, y;

	while (str[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y += 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
