#include "main.h"
/*
 *print_sign - print sign of number
 *@n: check number
 *Returns: 1 and print, if n is greater than 0 print -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
