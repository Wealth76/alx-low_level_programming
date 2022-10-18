#include "main.h"
#include <unistd.h>
/**
 * main - _putchar
 *
 * Return: Always 1 (done)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
