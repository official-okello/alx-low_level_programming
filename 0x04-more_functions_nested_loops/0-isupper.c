#include "main.h"

/**
*_isupper - checks if the character is uppercase
*@c: ascii of character being checked
*
*Return: 1 if true and 0 if false
*/

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
