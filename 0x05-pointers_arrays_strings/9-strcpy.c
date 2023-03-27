#include "main.h"

/**
*_strcpy - copies from src to dest
*@dest: copy from
*@src: copy to
*Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x in src)
	{
		dest[x] = src[x];
	}
	return (*dest);
}
