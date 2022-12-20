#include "main.h"
#include<stdio.h>

/**
 * print_rev - Function that prints a string in reverse
 * @s: The string
 *
 * Return: s in reverse
 */

void print_rev(char *s)
{
	int i = 0;
	int p;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (p = i; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
