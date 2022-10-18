#include <stdio.h>
/*
 * main - entry value
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for
		(a = 0);
		(a < 100);
		a++; {
		putchar(a + '0');
		if
			(a < 99) {
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
