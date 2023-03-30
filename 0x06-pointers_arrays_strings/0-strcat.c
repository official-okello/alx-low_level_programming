#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: concatenate to
*@src: concatenate from
*Return: concatenateted dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + 1] = src[j];
		i++;
		j++;
	}
	_putchar('\0');
	return (dest);
}
