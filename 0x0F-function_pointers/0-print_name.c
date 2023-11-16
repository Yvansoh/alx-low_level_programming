#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints name as is
 * @name: Name of the person
 * @f: Function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
