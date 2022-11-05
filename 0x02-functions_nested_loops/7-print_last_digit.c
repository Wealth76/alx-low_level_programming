#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: the number
 *Return: last output value.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_gigit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
