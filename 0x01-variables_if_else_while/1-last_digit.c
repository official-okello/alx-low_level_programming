#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - if else statements
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, m)
	}
	else if (m == 0)
	{
		printf("The last digit of %d is %d and is greater than 0\n", n, m)
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6\n", n, m)
	}
	return (0);
}
