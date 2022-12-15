#include "main.h"
/**
 * _abs - returns absolute value of an integer
 *
 * @x: integer input
 *
 * Return: Returns absolute interger
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
	}
	return (x);
}
