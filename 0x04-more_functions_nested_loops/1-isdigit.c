#include "main.h"

/**
*_isdigit - checks for digit
*@c: ascii for digit/character being checked
*Return: 1 for true and 0 for false
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
