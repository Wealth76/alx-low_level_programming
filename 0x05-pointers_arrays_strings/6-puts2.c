#include "main.h"

/**
 * puts2 - print every other character
 * @str: char to check
 * Return: 0 success
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
		_putchar('\n');
}
