#include "main.h"

/**
 * _strlen_recursion - the lenght to return
 * @s: string to be determined
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
