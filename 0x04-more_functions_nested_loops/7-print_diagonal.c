#include "main.h"

/**
 * print_diagonal - draws line in the terminal
 *
 * @n: number input
 *
 * Return: diagonal linein terminal
 */

void print_diagonal(int n)
{
	int st, li;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (st = 1; st <= n; st++)
		{
			for (li = 1; li < st; st++)
			{
				_putchar(' ');
			}
_putchar('\\');
_putchar('\n');
		}
	}
}
