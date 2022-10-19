#include "main.h"
/**
 *print_alphabet_x10 - print alphabet 10 times at lowercase
 */

void print_alphabet_x10(void)
{
	int times = 0;

	char wealth;

	while (times++ <= 9)
	{
		for (wealth = 'a'; wealth <= 'z'; wealth++)
			_putchar(wealth);
		_putchar('\n');
	}
}
