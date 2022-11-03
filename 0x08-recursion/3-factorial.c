#include "main.h"

/**
 * factorial - the factorial of 0
 * @n: should be lower than 0 to print an error message
 * Return: -1
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
