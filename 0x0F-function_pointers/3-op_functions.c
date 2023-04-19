#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adds 
  * @a: integer
  * @b: integer
  *
  * Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts
  * @a: int
  * @b: int
  *
  * Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies
  * @a: int
  * @b: int
  *
  * Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides
  * @a: int
  * @b: int
  *
  * Return: a / b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modulus
  * @a: int
  * @b: int
  *
  * Return: a % b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
