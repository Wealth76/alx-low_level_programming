#include "main.h"
/**
 * _strlen - return the value of lenght
 * @s: character to check
 * Return: a
 */
int _srtlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
