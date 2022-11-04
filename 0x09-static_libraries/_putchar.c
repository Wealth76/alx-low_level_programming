#include "main.h"

/**
 * _putchar - the fuctio to call the character c
 * @c: the char to print
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
