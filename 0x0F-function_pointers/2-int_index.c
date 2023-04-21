#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - returns the index of first matching integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to functions to be used
 * Return: index if found -1 if fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
		return (-1);
}
