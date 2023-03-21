#include "main.h"

/**
 * print_sign - check for positive, negative, zero
 *
 * @n: integer being checked
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		return (1);
	}
	_putchar('\n');
}
