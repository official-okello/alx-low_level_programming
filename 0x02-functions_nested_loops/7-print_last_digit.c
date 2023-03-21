#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 *@r: integer
 *
 * Return: Always 0.
 */

int print_last_digit(int r)
{
	int l = r % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
