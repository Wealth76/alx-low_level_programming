#include "main.h"

/*
 *@_isdigit: write a function for a digit
 *@c: char to check
 *Return: 0 0r 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
