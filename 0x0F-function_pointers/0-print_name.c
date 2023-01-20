#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that prints a name.
 * @name: Name to be printed
 * @f: pointer to a function
 *
 * Desc: This program prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}