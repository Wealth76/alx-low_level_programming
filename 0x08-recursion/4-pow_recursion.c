#include "main.h"

/**
 * _pow_recursion - function to for all the value
 * @x:should return -1
 * @y: if y is lower else dont return
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	{
		return (1);
	}
}
