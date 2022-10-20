#include "main.h"
/**
 *_isalpha - check char alphabet
 *@c: check char
 *Return: if letter is lower or upper 1, 0 if no
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
