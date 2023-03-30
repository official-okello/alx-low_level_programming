#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: concatenate to
*@src: concatenate from
*Return: concatenateted dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++
	}
	_putchar('\0');
	return (dest);
}
