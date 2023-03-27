#include "main.h"

/**
*puts_half - prints second half of a string
*@str: string
*/

void puts_half(char *str)
{
	int x, count = 0, y;

	for (x in str)
	{
		count++;
	}
	if (count %  2 != 0)
	{
		y = (count - 1) / 2;
		y += 1;
	}
	else
	{
		y = count / 2;
	}
	for (; y < count; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}