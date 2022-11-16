#include "function_pointers.h"

/**
  * int_index - functin that search for an integer
  * @array: the number 
  * @size: the size of element in the array
  * @cmp: pointer to the function to be used to compare
  * value
  *
  * Return: -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
