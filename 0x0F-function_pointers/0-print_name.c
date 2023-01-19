#include "function_pointers.h"
#include <stddef.h> 

/**
 * print_name - function that prints a name.
 * @name: Name to be printed
 * @f: pointer
 *
 * Desc: This program prints name
 */

void print_name(char *name, void (*f)(char *))
{
	_putchar(name);

	f();
}
