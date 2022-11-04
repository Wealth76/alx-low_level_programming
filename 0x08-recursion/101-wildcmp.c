#include "main.h"

/**
 * str_checker - check if two strings are the same
 * @s1: string_1 address_1
 * @s2: string_2 address_2
 * @i: left index.
 * @j: special index.
 * Return: 1 if s is palindrome, 0 else.
 */

int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - check if strings could be considered
 * @s1: string.
 * @s2: string.
 * Return: 1 if considered
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));

}
