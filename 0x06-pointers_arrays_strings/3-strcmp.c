#include "main.h"

/**
*_strcmp - compares two strings
*@s1: first string
*@s2: second string
*Return: integer value
*/

int _strcmp(char *s1, char *s2)
{
	int s1len = 0, s2len = 0;

	while (s1[s1len] != '\0')
	{
		s1len++;
	}
	while (s2[s2len] != '\0')
	{
		s2len++;
	}
	if (s1len > s2len)
		return (1);
	else if (s2len > s1len)
		return (-1);
	else
		return (0);
}
