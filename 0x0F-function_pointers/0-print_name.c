#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: pointer to name to print
 * @f: pointer to print function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
