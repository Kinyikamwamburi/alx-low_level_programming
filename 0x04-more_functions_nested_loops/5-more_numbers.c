#include "main.h"
/**
 * more_numbers - function that prints  0 to 14 10 times
 * i - number from 0 to 14
 * j - number to print i 10 times
 *
 * Return: numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
