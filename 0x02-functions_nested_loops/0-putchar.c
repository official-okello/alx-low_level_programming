#include "main.h"

/**
 * main - Prints _putchar as a message followed by a new line.
 *
 * Return: Always 0 (Success)
 */

 int main(void)
 {
 	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count = 0, c_size;

	c_size = sizeof(str) / sizeof(int);
	for (count = 0; count < c_size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
