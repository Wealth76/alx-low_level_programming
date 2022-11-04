#include "main.h"

/**
 *
 * _strlen_recursion - function that print the length of a string.
 *
 * @s: the string to print
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - check if s is palindrome.
 *
 * @s: string base address.
 *
 * @i: left index.
 * @n: rigth index.
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 *
 */

int pal_checker(char *s, int i, int n)
{
	if (s[i] == s[n])
		if (i > n / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, n - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 * Return: 1 if is prime, else 0
 *
 */

int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));

}
