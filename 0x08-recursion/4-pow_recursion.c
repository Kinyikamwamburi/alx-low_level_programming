#include "main.h"

/**
 * _pow_recursion -  function that returns
 * the value of x raised to the power of y
 * @x: Interger value to be raised to the power of y .
 * @y: power y that will raise interger x
 *
 * Return: power of x. If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
