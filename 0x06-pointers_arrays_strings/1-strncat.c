#include "main.h"
#include <stdio.h>

/**
*_strncat - concatenates strings
*@dest: concatenate to
*@src: concatenate from
*@n: bytes
*Return: Concatenate string
*/

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
