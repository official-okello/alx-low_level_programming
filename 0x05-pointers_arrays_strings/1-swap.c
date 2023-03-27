#include "main.h"

/**
*swap_int - swaps two integers
*@a: integer 1
*@b: integer 2
*/

void swap_int(int *a, int *b)
{
	&a = &b;
	&b = &a;
}
