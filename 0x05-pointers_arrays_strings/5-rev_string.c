#include "main.h"

/**
*rev_string - reverses a string
*@s: string
*/

void rev_string(char *s);
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		_putchar(s[-y]);
	}
}
