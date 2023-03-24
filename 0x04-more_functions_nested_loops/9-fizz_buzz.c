#include <stdio.h>
#include "main.h"

/**
*main - prints 1 to 100 but replaces multiplies of 3, 5, both
*Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('FizzBuzz');
		}
		else if (i % 3 == 0)
		{
			_putchar('Fizz');
		}
		else if (i % 5 == 0)
		{
			_putchar('Buzz');
		}
		else
		{
			printf("%d", i);
		}
		_putchar(' ');
	}
	return (0);
}
