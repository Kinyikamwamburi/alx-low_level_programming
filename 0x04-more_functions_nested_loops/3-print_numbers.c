#include "main.h"
/**
 * print_numbers - function that prints 0 to 9 numbers
 *
 * Return: numbers then newline
 */

void print_numbers(void)
{
	int i;

for (i = 0; i <= 9; i++)
	_putchar(i + '0');
_putchar('\n');
}
