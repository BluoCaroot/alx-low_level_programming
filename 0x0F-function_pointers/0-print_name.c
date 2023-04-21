#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: pointer to name to print
 * @f: pointer to print function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
