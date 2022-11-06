#include "main.h"
/**
 * _islower - confirm the char if is lowercase
 * @c: checke char
 * Return: 1 if char is lowercase, if no 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
