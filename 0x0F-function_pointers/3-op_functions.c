#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - nothing
  * @a: nothing
  * @b: nothing
  *
  * Return: a, b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - nothing else
  * @a: nothing else
  * @b: nothing else
  *
  * Return: ...
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - none
  * @a: none
  * @b: none
  *
  * Return: none
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - none
  * @a: none
  * @b: none
  *
  * Return: a, b
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
  * op_mod - nothing
  * @a: nothing
  * @b: nothing
  *
  * Return: 0
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
