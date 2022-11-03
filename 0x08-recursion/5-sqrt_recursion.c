#include "main.h"

/**
 * check - functions of square root
 * @a: int value
 * @b: int
 * Return: square root
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - functions of a square root
 * @n: int value
 * Return: square else -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
