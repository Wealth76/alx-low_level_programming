#include "main.h"

/**
 * cap_string - capitalize all words inside the string
 * @s: string
 * Return: address of j
 */

char *cap_string(char *)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(j + i))
	{
		if (*(j + i) >= 'a' && *(j + i) <= 'z')
		{
			if (i == 0)
				*(j + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(j + i - 1))
						*(j + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (j);
}
