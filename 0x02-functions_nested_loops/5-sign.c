#include"main.h"
/**
 * print_sign - prints out + 0 - depending if n is greater, equal or less than
 *
 * @n: input number
 *
 * Return: Results depending with int n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
