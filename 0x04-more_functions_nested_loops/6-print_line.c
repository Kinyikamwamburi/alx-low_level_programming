#include "main.h"

/**
 * print_line - draws straight line
 * @n: prints _
 *
 * Returns: straight line
 */
void print_line(int n)
{
	int st;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (st = 1; st <= n; st++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
