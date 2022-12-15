#include"main.h"
/**
 * print_last_digit - a function that prints out last digit of a number
 *
 * @d: the input number
 *
 * Return: The last digit of a number
 */
int print_last_digit(int d)
{
	int i;

	i = (d % 10);
	if (i < 0)
	{
		i = (-1 * i);
	}
	_putchar(i + '0');
	return (i);
}
