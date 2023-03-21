#include "main.h"

/**
 * _isalpha - checks for alphabet
 *
 * @c: The ascii code of the character
 *
 * Return: 1 if true and 0 if false.
 */

int _isalpha(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
	_putchar('\n');
}
