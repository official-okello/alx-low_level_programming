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
	last_digit = r % 10;
	return (last_digit);
}
