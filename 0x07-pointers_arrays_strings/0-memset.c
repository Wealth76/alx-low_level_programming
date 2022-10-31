#include "main.h"

/*
 * _memset - fill the first @n bytes of the memory area
 * @n: bytes of the memory area
 * @s: with the constant byte
 * @b: memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int = i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
