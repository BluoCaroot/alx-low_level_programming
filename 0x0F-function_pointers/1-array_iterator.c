#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to array to print
 * @size: size of array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
	{
		for (i = 0; i < size; ++i)
		{
			action(array[i]);
		}
	}
}
