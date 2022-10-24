#include <main.h>

/**
 * _putchar - writes character
 * @c: print char
 * Return: success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
