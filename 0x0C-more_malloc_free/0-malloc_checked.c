#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - terminate normal process with statuse of 98
 * @b: allocate memory
 * Return: return value of the memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
