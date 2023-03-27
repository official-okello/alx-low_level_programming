#include "main.h"

/**
*swap_int - swaps two integers
*@a: integer 1
*@b: integer 2
*@update: temp storage of &a
*/

void swap_int(int *a, int *b)
{
	int update = *a;

	*a = *b;
	*b = update;
}
