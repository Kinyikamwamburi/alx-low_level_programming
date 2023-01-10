#include "main.h"

/**
 * _puts - function that works similar to puts
 * @s: string that is printed out
 *
 * Return: Always 0 (Success)
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
