#include "main.h"
/**
 * _sqrt - square root of an integer
 * @i: integer
 * @sqr: the squared number
 * Return: square root of integer
 */
int _sqrt(int i, int sqr)
{
	if (i > sqr)
		return (-1);
	else if (i * i == sqr)
		return (i);
	else
		return (_sqrt(i + 1, sqr));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: interger
 *
 * Return: natural square root.
 * If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(1, n));
}
