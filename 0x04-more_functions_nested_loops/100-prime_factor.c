#include <stdio.h>
#include <math.h>

/**
*main - prints the largest prime number
*Return: 0
*/

int main(void)
{
	long n = 612852475143, d, f;

	for (d = 2; d <= sqrt(n); d++)
	{
		if (n % d == 0)
		{
			f = n / d;
		}
		else
		{
			continue
		}
	}
	printf("ld\n", f);
	return (0);
}
