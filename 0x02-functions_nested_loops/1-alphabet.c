#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints the alphabet in lowercase.
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
