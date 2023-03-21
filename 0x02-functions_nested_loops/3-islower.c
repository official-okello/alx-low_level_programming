#include "main.h"

/**
 *_islower - checks for lowercase character
 *
 *@c: The ascii code of the character
 *
 * Return: 1 if true and 0 if false.
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
	_putchar('\n');
}
