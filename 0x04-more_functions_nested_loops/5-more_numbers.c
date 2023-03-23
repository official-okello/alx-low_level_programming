#include "main.h"

/**
*more_numbers - prints the numbers 0 to 14, 10 times
*@c: the ancii code for digit
*@d: the counter digit
*Return: None
*/

void more_numbers(void)
{
	int c, d;

	for (d = 1; d <= 10; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
	}
}
