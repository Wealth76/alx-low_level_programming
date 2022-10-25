#include "main.h"

/**
 * puts2 - print every other character
 * @str: char to check
 * Return: 0 success
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
		(string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
